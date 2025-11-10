#include<stdio.h>
int main()
{
	int n,i,p,e;
	printf("enter no of array elements from 0 to 9:\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("enter position of element:\n");
	scanf("%d",&p);
	printf("enter element:\n");
	scanf("%d",&e);
	printf("array before elimination of element\n");
	for(i=0;i<n;i++)
	    printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
	  if(i==p-1)  continue;  // if(a[i]==e)
	  printf("%d ",a[i]);
    }
    return 0;
}
