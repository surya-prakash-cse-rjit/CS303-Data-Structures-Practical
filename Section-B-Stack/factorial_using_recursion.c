#include <stdio.h>
int factorial(int n) 
{
    printf("Function call: factorial(%d)\n", n);
    if(n == 1) 
   {
        printf("Returning 1 from factorial(1)\n");
        return 1;
    }
    int result = n * factorial(n - 1);
    printf("Returning %d from factorial(%d)\n", result, n);
    return result;
}
   int main() 
   {
    int n = 4;
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}
