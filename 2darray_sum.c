//2d array sum
#include<stdio.h>
int main()
{
	int b,c,i,j,sum=0;
	scanf("%d %d",&b,&c);
	int a[b][c];
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
