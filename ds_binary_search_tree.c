// BST Implementation
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node TreeNode; // Aliasing struct node as TreeNode
TreeNode *createNode(int val) {
    TreeNode *new_node = (TreeNode *)malloc(sizeof(TreeNode));
    // set data part to val
    new_node->data = val;
    // set both left and right pointers to NULL
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
TreeNode *insertANewNode(TreeNode *root, int val) {
    // Create a newnode out of given value
    TreeNode *new_node = createNode(val);
    if (root == NULL) // tree is empty
    {
        root = new_node;
        return root;
    }
    // If root is not null
    TreeNode *temp = root; // used to run a loop on tree
    TreeNode *parent = NULL; // Used to identify the parent of 
    // to be inserted new_node
    while (temp != NULL) {
        parent = temp; // Setting parent to current node
        if (temp->data < val) {
            temp = temp->right;
        }
        else {
            temp = temp->left;
        }
    }
    if (val < parent->data) parent->left = new_node;
    else parent->right = new_node;
    return root;
}
void InOrder(TreeNode *root)
{
	if(root)
	{
		InOrder(root->left)	;
		printf("%d",root->data);
		InOrder(root->right);
	}
}
int main() {
    int ch;
    TreeNode *root = NULL;
    while (1) {
        printf("1. Construct BST\n2. Traversal\n3. Search\nAny Other to exit.");
        scanf("%d", &ch);
        if (ch == 1) {
            // Construct a BST
            int A[] = {40, 32, 68, 36, 54, 79, 16, 52, 29, 146, 7};
            int n = sizeof(A) / sizeof(int); // 11
            for (int i = 0; i < n; i++) {
                root = insertANewNode(root, A[i]);
            }
        }
        else if (ch == 2) {
            // Run a loop on constructed BST
            // In-Order Traversal
            InOrder(root);
        }
        else if (ch == 3) {
            // Search in BST
        }
        else {
            break;
        }
    }
}
