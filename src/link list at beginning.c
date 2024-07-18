#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head,*temp,*ptr;
struct node *newnode();
struct node *newnode()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:");
	scanf("%d",&ptr->data);
	return ptr;
}
void main()
{
	int option;
	while(1)
	{
		printf("\nMenu\n1.Insert.\n2.traverse.\n3.Exit.");
		printf("\nEnter your choice:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
				traverse();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\nInvalid option.");
		}
	}
}
void insert()
{
	printf("\nAt beginning:");
	ptr=newnode();
	if(head==NULL)
	{
	head=ptr;
	ptr->link=NULL;
	}
	else
	{
		ptr->link=head;
		head=ptr;
	}
	printf("\successful");
}
void traverse()
{
	head=ptr;
	if(head==NULL)
	printf("\nLinked list is empty.");
	else
	{
		printf("\nTraversing list=\n");
		while(ptr!=NULL)
		{
			printf("%d=>",ptr->data);
			ptr=ptr->link;
		}
	}
}
