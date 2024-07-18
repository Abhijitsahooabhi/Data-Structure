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
void insert_after(struct node*n)
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


{
	struct node *nwnd;
	int key;
	nwnd=(struct node *)malloc(sizeof(struct node));
	printf("/nEnter insert node info-");
	scanf("%d",&key);
	
	while(n->info!=key)
	{
		n=n->next;
	}
	nwnd->next=n->next;
	n->next=nwnd;
}
	getch();
}
