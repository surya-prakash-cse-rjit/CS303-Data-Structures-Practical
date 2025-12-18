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
    head->next = n1;
    head->prev = n2;
    n1->data = 20;
    n1->next = n2;
    n1->prev = head;
    n2->data = 30;
    n2->next = head;
    n2->prev = n1;
    struct node *temp = head;
    printf("Circular Doubly List: ");
    
    do 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    while(temp != head);
    return 0;
}
