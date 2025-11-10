#include<stdio.h>
int main()
{
	int n,i,j=1,k,available=0;
	int arr[n];
	int tem[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	tem[0]=arr[0];
	for(i=1;i<n;i++)
	{
		available=0;
		for(k=0;k<j;k++)
		{
			if(arr[i]==tem[k])
			{
				available=1;
				break;
			}
				
				if(available==0)
				{
					tem[j]=arr[i];
					j++;
				}
			
		}
	}
	printf("the elements before removing duplicates\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	for(i=0;i<j;i++)
		printf("the elements after removing duplicates is %d",tem[i]);
}
