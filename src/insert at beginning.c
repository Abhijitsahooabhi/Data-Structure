#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node {
	int data;
	struct node *next;
};								//Create Linklist
struct node *head;
void main() {
	struct node *b;
	int c;
	b=(struct node*)malloc(sizeof(struct node*));	//create node

	if(b==NULL) {					//Main Part
		printf("/nOverflow");
	} else {
		printf("\nEnter value for insert:");
		scanf("%d",&c);
		b->data=c;
		b->next=head;
		head=b;
		printf("\nInsertion Success!");
	}

	b=head;					//Diplay Part
	if(b==NULL) {
		printf("Nothing to print");
	} else {
		printf("\nData Values:");
		while(b!=NULL) {
			printf("%d,",b->data);
			b=b->next;
		}
	}

	getch();
}
