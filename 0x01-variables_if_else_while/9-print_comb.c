#include<stdio.h>
int main() {
//declaration of variable
char z = '0';
//loop and condition
while(z<='9') {
putchar(z);
//secondary condtion
if(z !='9' ){
putchar(',');
putchar(' ');
}
z++;
}
putchar('\n');
return 0;
}
