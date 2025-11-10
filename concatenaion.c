#include<stdio.h>
int main()
{
	char a[20];
	char b[20];
	char c[50];
	printf("enter two strings:\n");
	gets(a);
	gets(b);
	int i,j=0;
	for(i=0;a[i]!='\0';i++)
	{
		c[j]=a[i];
		j++;
	}
	c[j]=' ';
	j++;
	for(i=0;b[i]!='\0';i++)
	{
		c[j]=b[i];
		j++;
	}
	c[j]='\0';
	printf("first string : %s \n",a);
	printf("second string : %s \n",b);
	printf("concatenated string : %s \n",c);
	return 0;
}
