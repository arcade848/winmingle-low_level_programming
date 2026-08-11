#include "main.h"
/*Author:Idris jimoh
*Program: Winmingle Community C Training
*Description:A C func thats prints the last digit of a number
*@d: number to check
*
*return: value of the last digit
*/
int print_last_digit  (int n ) {
  
  int last_digit;
  last_digit = n  % 10;
  if (last_digit < 0) { 
    last_digit = -last_digit;
	}
  _putchar(last_digit +'0');

  return (last_digit);
}
