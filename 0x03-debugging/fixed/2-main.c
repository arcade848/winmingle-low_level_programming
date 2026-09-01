#include "main.h"
#include <stdio.h>
/**
*Author:Idris jimoh
*Program:Winmingle Community C Training
*Description: A C file function that prints the largest of 3 integers
*main - tests function that prints the largest of 3 integers
*Return: 0
**/
int main(){
int a = 972;
int b = 500;
int c = 250;
int largest;
//passing the values a, b and c into the function
largest = largest_number(a,b,c);
//print the largest number to the screen
printf("%d is the largest number\n",largest);
return 0;
}
