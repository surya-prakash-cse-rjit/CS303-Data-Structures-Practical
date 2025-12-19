#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main() 
{
    struct node *top = NULL, *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 20;
    temp->next = top;
    top = temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 40;
    temp->next = top;
    top = temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 60;
    temp->next = top;
    top = temp;
    printf("Stack elements: ");
    struct node *ptr = top;
    while(ptr != NULL) 
   {
       printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
