#include <stdio.h>
void revnum(int n) {
int r, rev=0;
while(n>0) {
r = n%10;
rev = rev*10 + r;
n/=10;
}
printf("Reverse = %d", rev);
}
int main() {
revnum(143222);
return 0;
}