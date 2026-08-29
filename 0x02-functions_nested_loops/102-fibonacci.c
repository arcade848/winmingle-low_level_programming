#include <stdio.h>
/*Author:Idris jimoh
*Program:Winmingle Community C Training
*Description:A C file that prints first 50 fibonacci numbers
*main - prints the first 50 fibonacci numbers, starting with 1 and 2'
*       followed by a new line.
*return : always 0
*/
int main(void) {
int i;
unsigned long int fib1 = 1;
unsigned long int fib2 = 2;
unsigned long int next;

printf("%lu, %lu",fib1, fib2);
for (i = 3; i <= 50; i++) {
  next = fib1 + fib2;
  printf(", %lu", next);
  fib1 = fib2;
  fib2 = next;



} printf("\n");

return 0;

}
