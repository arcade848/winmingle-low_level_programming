#include "main.h"
/*Author:Idris Jimoh 
Program:Winmingle Community C Training
Description:A C file that checks for alphabetic characters
*_isalpha-checks for alphabetic characters
*@c- character to check
*return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c) {
  if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
     return 1;
  } return 0; 
} 
