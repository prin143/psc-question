#include <stdio.h>

int main() {
    int marks[10], i;
    float sum = 0, average;

    // Input marks
    printf("Enter marks of 10 students:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }

    // Calculate average
    average = sum / 10;

    // Display result
    printf("Average marks = %.2f", average);

    return 0;
}
