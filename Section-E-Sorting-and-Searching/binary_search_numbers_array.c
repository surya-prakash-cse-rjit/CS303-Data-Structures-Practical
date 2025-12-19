#include <stdio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int low = 0, high = 4, mid;
    int key = 30, found = 0;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            found = 1;
            break;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(found)
        printf("Element %d found at position %d", key, mid + 1);
    else
        printf("Element not found");
   return 0;
}
