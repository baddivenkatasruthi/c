#include<stdio.h>
int binarysearch(int[],int,int);
int binarysearch(int x[],int size,int target)
{
	int low=0,high=size-1,mid;
	while(low<=high)
	{
		mid = (low+high/2);
		if(x[mid]==target)
		   return mid;
		else if(x[mid]<target)
		   return low=mid+1;
		else 
		return high=mid-1;
	}
	return -1; // i think -1 bcz element  not found at any of the index
}
int main()
{
	int n,key,i;
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	   scanf("%d",&arr[i]);
	   
	scanf("%d",&key);
	int index;
	index=binarysearch(arr,n,key);
	
	if(index==-1)
	   printf("Element not found\n");
	else 
	   printf("Element found at %d position \n",key,index);
	   
	return 0;
}
