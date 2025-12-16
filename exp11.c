#include <stdio.h>

int main() {
    int a[50], n, i, pos, num;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input new number and position
    printf("Enter the number to insert: ");
    scanf("%d", &num);

    printf("Enter the position: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the number
    a[pos - 1] = num;
    n++;

    // Display updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
