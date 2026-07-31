#include<stdio.h>
/*Author:Idris Jimoh
Program:Winmingle Community C Training
*Description:A C program that prints combination of three digits
*/
int main(){ 
//declaring variables
int first = 0;
int second;
int third;
//first loop and condition
while(first <= 7) {
second = first + 1;
//first primary inner loop and condition
while(second <= 8) {
third = second + 1;
//second inner loop and condition
while(third <= 9) {
putchar(first + '0');
putchar(second + '0');
putchar(third + '0');
//final inner loop and condition
if(first != 7 || second != 8 || third != 9) {
putchar(',');
putchar(' ');
} 
third++;
}
second++;
}
first++;
}
putchar('\n');
return 0;
} 
