#include<stdio.h>
/*Author:Idris jimoh
*Program:Winmingle Community C Training
*Description:A C program that prints different combination of two digits
*/
int main() {
//variable declaration
int first = 0;
int second;
//loop and condition
while(first <=0){
second=first + 1;
//inner loop and condition
while(second <= 9){
putchar(first + '0');
putchar(second + '0');
//secondary inner loop
if(first != 8 || second != 9){
putchar(',');
putchar(' ');

}
second++; 
} first++;
} 
putchar('\n');
return 0;
}
