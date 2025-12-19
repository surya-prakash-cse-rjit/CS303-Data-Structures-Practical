#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main() 
{
    struct node *front = NULL, *rear = NULL, *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 15;
    temp->next = NULL;
    front = rear = temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 20;
    temp->next = NULL;
    rear->next = temp;
    rear = temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 25;
    temp->next = NULL;
    rear->next = temp;
    rear = temp;

    printf("Queue elements: ");
    struct node *ptr = front;
    while(ptr != NULL) 
{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    front = front->next;
    printf("\nAfter deletion: ");
    ptr = front;
    while(ptr != NULL) 
{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
     return 0;
}
