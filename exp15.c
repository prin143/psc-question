#include <stdio.h>
int main() {
char city[5][20];
int i;
for(i=0;i<5;i++) scanf("%s", city[i]);
for(i=0;i<5;i++) printf("%s\n", city[i]);
return 0;
}