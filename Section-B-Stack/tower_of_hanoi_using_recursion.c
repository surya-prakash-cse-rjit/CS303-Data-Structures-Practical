#include <stdio.h>
void move(int n, char a, char b, char c) 
{
    if(n == 1) 
{
        printf("Move disk 1 from %c to %c\n", a, b);
        return;
    }
    move(n-1, a, c, b);
    printf("Move disk %d from %c to %c\n", n, a, b);
    move(n-1, c, b, a);
}
int main() 
{
    move(3, 'A', 'C', 'B');
    return 0;
}
