#include<stdio.h>
/**Author:Idris Jimoh
*Program:Winmingle Community C Training
*Description:A C program that prints the sum of even-valued terms in a fibonacci sequence
*int- variable type declaration
*while-loop and condition of when values are less than 4000000
*if-conditional statement on terms being even and assign value to the sum variable
*printf-printing the sum of the even numbers in the sequence
*/
int main() {
int a = 1;
int b =2;
int next;
int sum = 0;
while(a <= 4000000) {
if(a % 2 == 0) {
sum = sum + a;
}
next = a + b;
a = b;
b = next;
}
printf("%d\n",sum);

}
