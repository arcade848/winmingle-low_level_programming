#include "main.h"
/*Author:Idris jimoh
*Program:Winmingle Community C Training
*Description: a function that checks for lowercase character
* if :checks if c is greater than a and less than z
*return: 1 i.e true if the char is lowercase
*return: 0 i.e false if the char is uppercase
*/
int _islower(int c) {
   if ( c >= 'a' && c <= 'z' ) {
     return 1;
  
   } 
   return 0;
  } 
