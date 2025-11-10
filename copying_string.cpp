#include<stdio.h>
int main()
{
	char a[20];
	char b[20];
	int i;
	printf("enter the string:\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("given string:%s\n",a);
	printf("copies string:%s\n",b);
	return 0;
}
