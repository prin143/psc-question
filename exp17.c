#include <stdio.h>
#include <string.h>
int main() {
char name[10][20], key[20];
long mob[10];
int i;
for(i=0;i<10;i++) scanf("%s%ld", name[i], &mob[i]);
scanf("%s", key);
for(i=0;i<10;i++)
if(strcmp(name[i], key)==0)
printf("Mobile = %ld", mob[i]);
return 0;
}
