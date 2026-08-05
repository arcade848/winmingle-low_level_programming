#include "main.h"
/*author:Idris Jimoh
program:Winmingle Community C training
Description: A C file that prints alphabet in lowercase,followed by a new line.
*/
void print_alphabet(void) {
     char c  ;
/*loop through lowercase letters */	 
	 for( c = 'a'; c <= 'z'; c++ ) { 
        _putchar(c);
	 } 
	 _putchar('\n');
}
