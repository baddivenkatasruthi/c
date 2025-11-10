#include<stdio.h>
int main()
{
	FILE *p1,*p2;
	p1=fopen("bts.txt","r");
	p2=fopen("bangtan.txt","w+");
	if(p1==NULL || p2==NULL)
	{
		printf("file connecton failed");
		return 1;
	}
	char ch;
	while(1)
	{
		ch=fgetc(p1);
		if(ch==EOF)
		   break;
		fputc(ch,p2);
	}
	printf("file copied successfully");
	fclose(p1);
	fclose(p2);
	return 0;
}
