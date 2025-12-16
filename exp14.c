#include <stdio.h>
int main() {
int a[10], l=0, h=9, m, key, i;
for(i=0;i<10;i++) scanf("%d", &a[i]);
scanf("%d", &key);
while(l<=h) {
m=(l+h)/2;
if(a[m]==key) { printf("Found"); break; }
else if(key<a[m]) h=m-1;
else l=m+1;
}
return 0;
}