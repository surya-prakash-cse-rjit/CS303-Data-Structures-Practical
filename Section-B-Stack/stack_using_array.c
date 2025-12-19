#include <stdio.h>
int main() 
{
    int stack[5], top = -1;
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    printf("Stack elements: ");
    for(int i = top; i >= 0; i--) 
    {
        printf("%d ", stack[i]);
    }
    top--;
    printf("\nAfter pop: ");
    for(int i = top; i >= 0; i--) 
    {
        printf("%d ", stack[i]);
    }
    return 0;
}
