#include<stdio.h>
#include<conio.h>
#define S 50
int arr[S],s,i;
void insert();
void del();
void display();
void main()
{
	int option;
	//clrscr();
	printf("Enter Array Size:");
	scanf("%d",&s);
	printf("\nEnter element into the Array:");
	for(i=0;i<s;i++)
	{
		printf("\narray value of arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	do
	{
		printf("\n.......In Array........\n1.Insert element.\n2.Delete element.\n3.Traverse element.\n4.Exit.");
		printf("\nEnter your choice(1-4):");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
			insert();
			break;
			case 2:
			del();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			default:
			printf("Invalid Option.Enter correct option 1-4");
			scanf("%d",&option);
		}
	}while(option!=4);
	//getch();
}
void insert()
{
	int pos,no;
	printf("\nEnter the insert element position: ");
	scanf("%d",&pos);
	printf("\nEnter the insert element: ");
	scanf("%d",&no);
	if(s>S)
	printf("\nOverflow can't insert element.");
	else
	for(i=s;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=no;
	s++;
}
void del()
{
	int pos;
	printf("\nEnter the delete element position: ");
	scanf("%d",&pos);
	if(s<0)
	printf("\nUnderflow no element in array.");
	else
	for(i=pos-1;i<s-1;i++)
	{
		arr[i]=arr[i+1];
	}
	s--;
}
void display()
{
	printf("Traverse Element in Array:");
	for(i=0;i<s;i++)
	{
		printf("\nArray element is arr[%d]= %d",i,arr[i]);
	}
}
