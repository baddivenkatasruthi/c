#include<stdio.h>
int main()
{
	int n,i,c=0;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(a[i]%i==0)   c++;
	}
	printf("%d",c);
	return 0;
}
