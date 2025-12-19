#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *left, *right;
};
struct node* create(int value) 
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct node* insert(struct node* root, int value) 
{
    if(root == NULL)
        return create(value);
   if(value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}
void inorder(struct node* root) 
{
    if(root != NULL) 
{
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct node* root) 
{
    if(root != NULL) 
{
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root) 
{
    if(root != NULL) 
{
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}


int main() 
{
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\nPreorder Traversal: ");
    preorder(root);
    printf("\nPostorder Traversal: ");
    postorder(root);
    return 0;
}
