#include <stdio.h>
int fun(int a, float b, char c) {
return a + (int)b + c;
}
int main() {
printf("Result = %d", fun(10, 2.5, 'A'));
return 0;
}