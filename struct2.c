#include<stdio.h>
// defining a structure
struct employee
{
	int id;
	char name[40];
	int age;	
};
int main()
{
	//intializing of structure
	struct employee e1 ={1,"jk",19};
	struct employee e2 = {2,"v",20}; //for one employee
	struct employee e3={name:"suga",age:18,id:3};
	// accessing a strut by . dot operator
	//syntax : structure_name.member_name
	struct employee e5,e4;
	printf("enter id :\n");
	scanf("%d",&e4.id);
	printf("enter name:\n");
	scanf("%s",e4.name);
	printf("enter age:\n");
	scanf("%d",&e4.age);
	printf("enter id :\n");
	scanf("%d",&e5.id);
	printf("enter name:\n");
	scanf("%s",e5.name);
	printf("enter age:\n");
	scanf("%d",&e5.age);
	printf("Id\tname\tage\n");
	printf("-------------------\n");
	printf("%d\t%s\t%d\n",e1.id,e1.name,e1.age);
	printf("%d\t%s\t%d\n",e2.id,e2.name,e2.age);
	printf("%d\t%s\t%d\n",e3.id,e3.name,e3.age);
	printf("%d\t%s\t%d\n",e4.id,e4.name,e4.age);
	printf("%d\t%s\t%d\n",e5.id,e5.name,e5.age);
	printf("size of %d\n",sizeof(e1));
	printf("by stryct name-%d",sizeof(struct employee));
}
