#include "main.h"
#include <stdio.h>
/**
*main - tests the function that prints the largest of three numbers
*Return: 0
**/
int main () {
int a = 972;
int b = -400;
int c = 0;
int largest;
/*passing the values a, b, and c diectly into the function*/
largest = largest_number(a,b,c);
//printing the largest number to the screen
printf("%d is the largest number\n",largest);
return 0;

}
