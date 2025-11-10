//write a program to print the colour name by taking the colour code as input using switch case
#include<stdio.h>
//#include<ctype.h>
int main()
{
	char ch;
	
	printf("enter any character:");
	scanf("%c",&ch);
	
	//ch=tolower(ch);
	switch (ch)
	{
 		case'v':
 		case'V':	
			printf("violet");
			break;
		
		case'i':
		case'I':
			printf("indigo");
			break;
				
		case'b':
		case'B':
			printf("blue");
			break;
			
		case'g':
		case'G':
			printf("green");
			break;
			
		case'y':
		case'Y':
			printf("yellow");
			break;	
			
		case'o':
		case'O':
			printf("orange");
			break;
			
		case'r':
		case'R':
			printf("red");
			break;
				
		default:
			printf("enter VIBGYOR colours only");
}
	return 0;
}

