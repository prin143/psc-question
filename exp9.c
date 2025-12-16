#include <stdio.h>

int main() {
    int a[10], i;

    // Taking input
    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Displaying output
    printf("The entered numbers are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
