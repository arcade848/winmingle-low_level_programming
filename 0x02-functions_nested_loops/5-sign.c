#include "main.h"
/*Author:Idris Jimoh
Program:Winmingle Community C Training
Description:A C file that prints the sign of a number
*print_sign - prints the sign of a number
*@n:number to be checked
*return:1 and prints + if n is greater than 0
*return:0 and prints 0 if n is zero
*return:-1 and prints - if n is less than 0
*/
int print_sign(int n) {
 if ( n > 0) {
   _putchar('+');
   return 1;
 } 
 else if( n == 0) {
   _putchar('0');
   return 0;
 } 
 else {
   _putchar('-');
   return -1;
 } 
 } 
 
