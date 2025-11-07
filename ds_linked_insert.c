#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *create_new_node(int val)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->next = NULL;
	return new_node; 
}
void insert_at_head(int val)
{
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode ->data = val;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	}
}
void insert_at_tail(int val)
{
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = val;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		struct node *temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void delete_at_head()
{
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("No node to delete\n");
	}
	else
	{
		struct node *delete_node = head;
		printf("%d is deleted\n",head->data);
		head = head->next;
		free(delete_node);
	}
}
void delete_at_tail()
{
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("No nodes to delete\n");
	}
	else if(head->next == NULL){
		head = NULL;
	}
	else
	{
		struct node *temp = head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = NULL;
	}
}
void search_element(int key)
{
	int found = 0;
	struct node*temp = head;
	while(temp!=NULL)
	{
		if(temp->data == key)
		{
		found = 1;
		break;	
		}
		temp = temp->next;
	}
	printf("%s\n",found ? "Found" : "Not Found" );
}
int get_node_count()
{
	int count = 0;
	struct node *temp = head;
	while(temp!=NULL)
	{
	count ++;
	temp = temp->next;	
	}
	return count;
}
void insert_at_pos(int pos,int val)
{
	struct node *newnode = create_new_node(val);
	if(head == NULL || pos == 0)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		struct node *temp = head;
		//  while(pos > 1)
	    while(pos > 1 && temp->next != NULL)
	{
		temp = temp->next;
		pos--;
	}
//	printf("%d\n",temp->data);
newnode->next = temp->next;
temp->next = newnode;
	}
}
/* void delete_at_position(int pos) {
   // if (head == NULL) {
   //     printf("List is empty\n");
   //     return;               *
  //  }

  //  if (pos == 1) {
   //     struct node* temp = head;
   //     head = head->next;
   //     printf("%d deleted from position %d\n", temp->data, pos);
        free(temp);
        return; *
    }

    struct node* temp = head;
    struct node* prev = NULL;

    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    prev->next = temp->next;
    printf("%d deleted from position %d\n", temp->data, pos);
    free(temp);
} */

void display()
{
	struct node *temp = head;
	if(head == NULL)
	{
		printf("No nodes to display\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter\n1. Insert at head\n2. Insert at tail\n3. Display\n4.Delete at head\n5. Delete at tail\n6.Search an element\n7.Count Nodes\n8.Insert at specified position\nAny other to EXIT\n");
		scanf("%d",&ch);
		if(ch == 1){
				int val;
			printf("Enter a value to insert: ");
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(ch == 2){
			int val;
			printf("Enter a value to insert: ");
			scanf("%d",&val);
			insert_at_tail(val);
		}
		else if(ch == 3){
			display();
		}
		else if(ch == 4){
			delete_at_head();
		}
		else if(ch == 5)
		{
			delete_at_tail();
		}
		else if(ch == 6)
		{
			int key;
			printf("Enter a value to search");
			scanf("%d",&key);
			search_element(key);
		}
		else if(ch == 7)
		{
			int node_count = get_node_count();
			printf("Linkedlist is having %d Nodes\n",node_count);
		}
		else if(ch == 8)
		{
			int val,pos;
			printf("Enter the position: ");
			scanf("%d",&pos);
			printf("Enter a value to create Node:");
			scanf("%d",&val);
			insert_at_pos(pos,val);
		}
		/*
		else if(ch == 9)
		{
			int pos;
	printf("Enter position to delete:\n");
	scanf("%d", &pos);
	delete_at_position(pos);
		} */
		else
		{
			printf("Thank you");
			break;
		}
	}
}
