#include<stdio.h>
int main()
{
	int i,key,n,found=0,pos=0;
	printf("Enter the Size of the Array\n");
	scanf("%d",&n);
	int arr[n];
	//Read the Array Elements
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	printf("Enter the Key Element to search in the given array\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		  if(key==arr[i])
		  {
		  	found=1;
		  	pos=i;
		  	break;
		  }
	}
	if(found==1)
	   printf("%d is found at %d index in the given array",key,pos);
	else
	   printf("%d is not found in the given array",key);
}

