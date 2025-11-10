#include<stdio.h>
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void selection_sort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
}

int main()
{
	int n,i;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before Sorting:\n");
	print(a,n);
	selection_sort(a,n);
	printf("After Sorting:\n");
	print(a,n);
	return 0;
}
