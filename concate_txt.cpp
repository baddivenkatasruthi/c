#include<stdio.h>
int main()
{
	char A[30],B[30],C[50];
	printf("Enter any two Strings\n");
	gets(A);
	gets(B);
	int i,j=0;
	for(i=0;A[i]!='\0';i++)
	 {
	 	C[j]=A[i];
	 	j++;
	}
	C[j]=' ';
	j++;
	for(i=0;B[i]!='\0';i++)
	{
		C[j]=B[i];
		j++;
	}
	C[j]='\0';
	printf("First String %s: \n",A);
	printf("Second String %s: \n",B);
	printf("Concatenated String %s: \n",C);
	return 0;  
}

