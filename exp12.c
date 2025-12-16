#include <stdio.h>

int main() {
    int a[10], i, num, found = 0;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d", &num);

    // Searching the number
    for (i = 0; i < 10; i++) {
        if (a[i] == num) {
            found = 1;
            break;
        }
    }

    // Display result
    if (found == 1)
        printf("Number is available in the array.");
    else
        printf("Number is not available in the array.");

    return 0;
}
55