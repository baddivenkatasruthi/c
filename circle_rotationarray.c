#include<stdio.h>
int main()
{
	int n,temp,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("array elements before circular rotational\n");
	for(i=0;i<n;i++)
	   printf("%d ",a[i]);
	printf("\n");
	temp=a[n-1];
	for(i=n-1;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	printf("array elements after circular rotation\n");
	for(i=0;i<n;i++)
	    printf("%d ",a[i]);
}
