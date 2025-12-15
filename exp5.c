
// Largest of three using ternary//
#include <stdio.h>
int main() {
int a=4,b=8,c=6, max;
scanf("%d%d%d", &a,&b,&c);
max = (a>b)?((a>c)?a:c):((b>c)?b:c);
printf("Largest = %d", max);
return 0;
}