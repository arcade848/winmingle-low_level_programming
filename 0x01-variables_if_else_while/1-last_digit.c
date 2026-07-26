#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Author:Idris Jimoh
* Program:Winmingle Community C Training
*Description: A C program that prints the last digit of a random number n
*/
 int main(){
int n;  //variable declaration
int last_digit;
srand(time(0)); //calling the function that prints time
n = rand()-RAND_MAX/2; // random number generator
last_digit = n % 10; //last digit generator
printf("Last digit of %d is %d and is .. \n", n, last_digit);
//conditional statements
if(n>5){
printf("greater than 5\n");
}
else if(n==5) {
printf("0\n");
}
else{
printf("less than 6 and not 0\n");
}
return 0;
}
