#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
struct node
{
	int info;
	struct node * next;
}

{
	struct node *n *head;
	char ch;
	n=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter node info:");
	scanf("%d",&n->info);
	n->next=NULL;head=n;
	printf("\nDo you need more node:");
	fflush(stdin);
	ch=getchar()
	
	while(ch=='y'||ch=='Y')
	{
		n->next=(struct node*)malloc(sizeof(struct node));
		n=n->next;
		printf("\nEnter node info:");
		scanf("%d",&n->info);
		n->next=NULL;
		printf("\nDo you need more node:");
		fflush(stdin);
		ch=getchar()
	}
	//Display or Traverse code start here
	n=head;
	while(n!=NULL)
	{
		printf("%d",n->info);
		n=n->next;
	}
	getch();
}


