#include <stdio.h>
int main() 
{
    int cq[5];
    int front = -1, rear = -1;
    int size = 5;
    front = rear = 0;
    cq[rear] = 22;
    rear = (rear + 1) % size;
    cq[rear] = 33;
    rear = (rear + 1) % size;
    cq[rear] = 44;

    printf("Circular Queue elements: ");
    int i = front;
    while(1) 
   {
        printf("%d ", cq[i]);
        if(i == rear)
            break;
        i = (i + 1) % size;
    }
    front = (front + 1) % size;

    
    printf("\nAfter deletion: ");
    i = front;
    while(1) 
    {
        printf("%d ", cq[i]);
        if(i == rear)
            break;
        i = (i + 1) % size;
    }
    return 0;
}
