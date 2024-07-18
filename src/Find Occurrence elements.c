#include<stdio.h>
void main()
{
	int a[50],s,i,find,count=0;
	printf("Enter array size:\n");
	scanf("%d",&s);
	printf("Enter element into array\n");
	for(i=0;i<s;i++)
	{
		printf("value of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\narray eleements are:-");
	for(i=0;i<s;i++)
	{
		printf("\t %d",a[i]);
	}
	printf("\nEnter to a number for search-");
	scanf("%d",&find);
	for(i=0;i<s;i++)
	{
		if(find==a[i])
		{
		printf("\n%d occurrence %d position",find,i+1);
		count++;
		}
	}
	if(count==0)
	printf("\n%d searching element not found",find);
	else
	printf("\n%d total %d time occurrence in the array",find,count);
}
