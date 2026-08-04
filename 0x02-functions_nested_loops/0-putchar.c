#include "main.h"
/*Author:Idris Jimoh
*Program:Winmingle comunity C Training
*Description:A c file that uses the defined _putchar func to prints string to the screen.
*main-prints "_putchar" to the screen followed by a new line.
*return:always 0
*/
int main(void) {
 int i = 0;
 char c;
 char a [] = "_putchar";
 while( i <= 8 ) {
  c = a [i];
  _putchar(c);
  i++;
 } 
 _putchar('\n');
 return 0;
}
