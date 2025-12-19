#include <stdio.h>
int main() 
{
    int queue[5];
    int front = 0, rear = -1;
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;
    printf("Queue elements: ");
    for(int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    front++;
    printf("\nAfter deletion: ");
    for(int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    return 0;
}
