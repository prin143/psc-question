#include <stdio.h>
#include <string.h>
int main() {
char a[20]="Hello", b[20]="World";
printf("Length=%d\n", strlen(a));
strcat(a,b);
printf("Concat=%s\n", a);
printf("Compare=%d", strcmp(a,b));
return 0;
}