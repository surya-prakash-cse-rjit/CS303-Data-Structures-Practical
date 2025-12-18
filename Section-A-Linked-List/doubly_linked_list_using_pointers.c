#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *prev, *next;
};
int main() 
{
    struct node *head, *n1, *n2;
    head = (struct node*)malloc(sizeof(struct node));
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->prev = NULL;
    head->next = n1;
    n1->data = 20;
    n1->prev = head;
    n1->next = n2;
    n2->data = 30;
    n2->prev = n1;
    n2->next = NULL;
    struct node *temp = head;
    printf("Forward Traversal: ");
    while(temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
      return 0;
}
