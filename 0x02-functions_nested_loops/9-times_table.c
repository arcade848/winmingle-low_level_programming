#include "main.h"
/**Author:Idris Jimoh
*Program:Winmingle Community C Training
*Description:A func that prints the 9 times table
first: loops  through j
second loop: loops through anything
conditional statement: prints double digit of j if the condition is through
**/
void times_table(void) {
int i;
int j;
 for( i = 0; i <= 9; i++ ) {
 for( j = 0; j <= 9; j++ ) { 
    if( i * j >= 10 ) {
	_putchar((i * j) / 10 + '0');
	_putchar((i * j) % 10 + '0');
 } 
 else{ 
   _putchar((i * j) % 10 + '0');
 } 
 if( j < 9){
  _putchar(',');
  _putchar(' ');
  
 } else { 
 _putchar('\n');
 } 
}
} 
}
