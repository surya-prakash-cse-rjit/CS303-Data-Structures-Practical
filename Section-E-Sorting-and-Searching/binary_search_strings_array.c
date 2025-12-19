#include <stdio.h>
#include <string.h>
int main() {
    char names[5][10] = {"Surya", "Shivam", "Sagar", "Vaibhav", "Shubham"};
    int low = 0, high = 4, mid;
    char key[10] = "Sagar";
    int found = 0;
    while(low <= high) {
        mid = (low + high) / 2;
        if(strcmp(names[mid], key) == 0) {
            found = 1;
            break;
        }
        else if(strcmp(names[mid], key) < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
     if(found)
        printf("String '%s' found at position %d", key, mid + 1);
    else
        printf("String not found");
    return 0;
}
