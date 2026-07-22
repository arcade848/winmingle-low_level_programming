#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
*Author:Idris Jimoh
*Program: Winmingle Community C Training
*Description: A C file that assigns a random number to a variable and
prints an output if the number is positive or negative or zero.
*/
int main(){//entry point
int n;//variable declaration
srand(time(0));//this function returns current date
n = rand()-RAND_MAX/2;//random number generator
if(n>0) {
printf("%d is positive \n",n);
} 
else if(n==0) {
printf("%d is zero \n",n );
}
else{
printf("%d is negative \n",n);
}
return 0;
} 
