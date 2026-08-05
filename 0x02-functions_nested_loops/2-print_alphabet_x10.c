#include "main.h"
/*Author:Idris Jimoh
*Program:Winmingle Community C Training
Description:A c file that prints alphabet 10 times.
*/
void print_alphabet_x10(void) { 
/*variable declaration */
     int i;
	 char c;
	 /*outer  loop repeats the cycle of inner loop 10 times */
   	 for ( i = 0; i < 10 ; i++) { 
	 /*inner loop loops through lower case alphabets */
        for (c = 'a'; c <= 'z'; c++) {
            _putchar(c);

		} 
		_putchar ('\n');
	 }
}
