#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};
void main()
{
	struct node *n, *head;
	char ch;
	n=(struct node *)malloc(sizeof(struct node));
	head=n;
	printf("Enter node Info:");
	scanf("%d",&n->info);
	n->next=NULL;
	printf("Do You want More Node-");
	fflush(stdin);
	ch=getchar();
	while(ch=='y' ||ch=='Y')
	{
		n->next=(struct node*)malloc(sizeof(struct node));
		n=n->next;
		printf("Enter node info:");
		scanf("%d",&n->info);
		n->next=NULL;
		printf("Do You want More Node-");
		fflush(stdin);
		ch=getchar();
	}
	//Display or Traverse
	n=head;
	printf("Elements are:");
	while(n!=NULL)
	{
		printf("%d->",n->info);
		n=n->next;
	}
	getch();
}
