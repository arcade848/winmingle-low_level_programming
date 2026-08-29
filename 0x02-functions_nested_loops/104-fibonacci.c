#include <stdio.h>
/**
*Author:Idris Jimoh
*Program:Winmingle Community C Training
*Description: A C program that finds and prints the first 98 Fibonacci numbers
int-variable declarations
while-loop and the condition to execute block
if-conditional statement
printf-newline
return-always 0
**/
int main() {
int a = 1;
int b = 2;
int next;
int count = 0;
while( count <= 98) {
printf("%d",a);
if(count < 97) {
printf(",");
printf(" ");
}
next = a + b;
a = b;
b = next;
count++;
}
printf("\n");
return 0;
}

