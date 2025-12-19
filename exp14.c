#include <stdio.h>

int main() {
    int a[10], l = 0, h = 9, m, key, i, found = 0;

    printf("Enter 10 sorted elements:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(l <= h) {
        m = (l + h) / 2;

        if(a[m] == key) {
            printf("Found at index %d", m);
            found = 1;
            break;
        }
        else if(key < a[m])
            h = m - 1;
        else
            l = m + 1;
    }

    if(found == 0)
        printf("Not Found");

    return 0;
}
