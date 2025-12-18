#include <stdio.h>
int main() 
{
    int data[10], next[10];
    int head = 0;
    data[0] = 10; next[0] = 1;
    data[1] = 20; next[1] = 2;
    data[2] = 30; next[2] = 3;
    data[3] = 40; next[3] = -1;

    int i = head;
    printf("Linked List elements: ");
    while(i != -1) 
    {
        printf("%d ", data[i]);
        i = next[i];
    }
    return 0;
}
