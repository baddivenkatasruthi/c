//sum of anti diagonal elements
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
			if(i+j==b-1  || i+j==c-1)
		    	sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("diagonal elements : %d",sum);
	return 0;
}
