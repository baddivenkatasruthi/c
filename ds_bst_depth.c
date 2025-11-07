#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* create_new_node(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = newnode->right = NULL;
    return newnode;
}

// Insertion into BST
struct node* insert(struct node* root, int value) {
    if (root == NULL) {
        return create_new_node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

// In-order traversal (Left, Root, Right)
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Pre-order traversal (Root, Left, Right)
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Post-order traversal (Left, Right, Root)
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root = NULL;
    int ch, val;

    while (1) {
        printf("\nEnter\n1.Insert\n2.In-order\n3.Pre-order\n4.Post-order\nAny other to exit\n");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Enter value to insert:\n");
            scanf("%d", &val);
            root = insert(root, val);
            printf("%d inserted into BST\n", val);
        } else if (ch == 2) {
            printf("In-order Traversal: ");
            inorder(root);
            printf("\n");
        } else if (ch == 3) {
            printf("Pre-order Traversal: ");
            preorder(root);
            printf("\n");
        } else if (ch == 4) {
            printf("Post-order Traversal: ");
            postorder(root);
            printf("\n");
        } else {
            printf("Exiting...\n");
            break;
        }
    }

    return 0;
}

