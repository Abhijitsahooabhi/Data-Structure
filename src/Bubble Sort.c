#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],size,i,j,temp;
	printf("\nEnter array size:");
	scanf("%d",&size);
	printf("\nEnter array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray elements are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
	//bubble sort
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[j]>a[j+1])
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("\n After sorting:\n");
 	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
}

