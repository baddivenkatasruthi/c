#include <stdio.h>
#include <stdlib.h>
// node is a structure (Self-Referential Structure)
struct node
{
	int data;
	struct node *next;
};

// Global Variable
struct node *head = NULL;
struct node * create_new_node(int val)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = val;
	new_node->next = NULL;
	return new_node; // Returning the created node
}
void insert_at_head(int val)
{
	// Creating a new node
	struct node *newnode = create_new_node(val);
	// Check if linked list  is empty
	if (head == NULL)
	{
		head = newnode; // created new node is our head now	
	}
	else
	{
		newnode->next = head; // store address of current_head in newnode's next
		head = newnode;	 // make newnode as your head 
	}
}
void insert_at_tail(int val)
{
	// Create a new node for insertion
	struct node *newnode = create_new_node(val);
	// To reach last node, attach newnode to last node
	if (head == NULL) // linked list is empty
	{
		head = newnode;
	}
	else
	{
		// Reaching the last node
		struct node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		// attach newnode to last node
		temp->next = newnode;
	}
}
void delete_at_head()
{
	if (head == NULL) printf("No nodes to delete\n");
	else {
		struct node *del_node = head;
		printf("%d is deleted\n", head->data);
		head = head->next;	// setting second node as new head node
		free(del_node); // freeing the memory allocated to node 1
	}
}
void delete_at_tail()
{
	// If linked list is itself empty
	if (head == NULL)
	{
		printf("No nodes to delete\n");
	}
	// If linked list contains only one node
	else if (head->next == NULL)
	{
//		free(head);
		head = NULL;	
	}
	else {
		// Stop at last but one node and set it's next part to NULL
		struct node *temp = head;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		printf("%d is deleted\n", temp->next->data);
		temp->next = NULL;
	}
}
void search_element(int key)
{
	// Found / Not Found
	int found = 0;
	struct node *temp = head;
	while (temp != NULL)
	{
		if (temp->data == key)
		{
			found = 1;
			break;
		}
		temp = temp->next;
	}
	printf("%s\n", found ? "Found" : "Not Found");
}
int get_node_count()
{
	int count = 0;
	struct node *temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
void insert_at_pos(int pos, int val)
{
	// Creation of node to insert 
	struct node *new_node = create_new_node(val);
	// Stop at pos - 1
	struct node *temp = head;
	while (pos > 1)
	{
		temp = temp->next;
		pos--;	
	}
//	printf("%d\n", temp->data);
	// Connect new node and next node
	new_node->next = temp->next;
	// Connect current (temp) node with newnode
	temp->next = new_node;
}
void display()
{
	struct node *temp = head;
	if (head == NULL)
	{
		printf("No nodes to display\n");
	}
	else
	{
		while (temp != NULL)
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}
int main()
{
	int ch;
	while (1)
	{
		printf("Enter\n1. Insert at head\n2. Insert at tail\n3. Display\n4. Delete at head\n5. Delete at tail\n6. Search Element\n7. Node Count\n8. Inserat at position\nAny other to exit:\n");
		scanf("%d", &ch);
		if (ch == 1)
		{
			int val;
			printf("Enter a value to insert: ");
			scanf("%d", &val);
			insert_at_head(val);
		}
		else if (ch == 2)
		{
			int val;
			printf("Enter a value to insert: ");
			scanf("%d", &val);
			insert_at_tail(val);
		}
		else if (ch == 3)
		{
			display();	
		}
		else if (ch == 4)
		{
			// Perform delete at head
			delete_at_head();
		}
		else if (ch == 5)
		{
			delete_at_tail();	
		}
		else if (ch == 6)
		{
			int key;
			printf("Enter a value to search: ");
			scanf("%d", &key);
			search_element(key);
		}
		else if (ch == 7)
		{
			int node_count = get_node_count();
			printf("Currently Linked List is having %d Nodes\n", node_count);
		}
		else if (ch == 8)
		{
			int val, pos;
			printf("Enter a position to insert: ");
			scanf("%d", &pos);
			printf("Enter a value to create a node for insertion: ");
			scanf("%d", &val);
			insert_at_pos(pos, val);	
		}
		else
		{
			printf("Thank You\n");
			break;	
		}
	}
}
