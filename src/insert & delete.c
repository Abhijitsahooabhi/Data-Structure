#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10], size,i;
	int pos,insert;
	
	printf("enter the array size:");
	scanf("%d",&size);
	printf("\nEnter the element into the array:");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the array value of arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\nThe array element is arr[%d]= %d",i,arr[i]);
	}
//Insert array element logic
	printf("\nEnter the insert element position: ");
	scanf("%d",&pos);
	printf("\nEnter the insert element: ");
	scanf("%d",insert);
//shift element
	for(i=size;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
//set index value to assign new element
	arr[pos-1]=insert; //(pos-1) reason index value is size-1
	size++;
	//print inserted array
	printf("\nAfter insert value the array is:");
		for(i=0;i<size;i++)
	{
		printf("\nThe array element is arr[%d]= %d",i,arr[i]);
	}
}
