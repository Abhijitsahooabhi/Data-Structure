#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void main()
{ 
 int i,loc,item; 
 struct node *ptr, *temp; 
 ptr = (struct node *) malloc (sizeof(struct node)); 
 if(ptr == NULL) 
 { 
 printf("\nOVERFLOW"); 
 } 
 else 
 { 
 printf("\nEnter element value "); 
 scanf("%d",&item); 
 ptr->data = item; 
 printf("\nEnter the location after which you want to insert "); 
 scanf("%d",&loc); 
 temp=head; 
 for(i=0;i<loc;i++) 
 { 
 temp = temp->next; 
 if(temp == NULL) 
 { 
 printf("\ncan't insert\n"); 
 return; 
 } 
 } 
 ptr ->next = temp ->next; 
 temp ->next = ptr; 
 printf("\nNode inserted"); 
 } 
} 
