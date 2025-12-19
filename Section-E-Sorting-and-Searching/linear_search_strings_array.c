#include <stdio.h>
#include <string.h>
int main() 
{
    char names[5][10] = {"Yograj", "Yashwant", "Jagdish", "Vivek", "Suhel"};
    char key[10] = "Jagdish";
    int found = 0;
    for(int i = 0; i < 5; i++) 
{
        if(strcmp(names[i], key) == 0) 
{
            printf("String '%s' found at position %d", key, i + 1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("String not found");
     return 0;
}
