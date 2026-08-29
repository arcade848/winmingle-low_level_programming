#include "main.h"
#include <stdio.h>
/*Author:Idris Jimoh
*Program:Winmingle Community C Training
*Description:A C file that prints all natural numbers
*while-loops through numbers 
*printf-prints numbers on screen
*if-checks if numbers are less than 98 and excutes inner block
*/
void print_to_98(int n) { 

while(n <= 98) { 
 printf("%d",n);
  if(n != 98) {
  printf(",");
  printf(" ");
  }
  n++;
} 
 printf("\n");
}
