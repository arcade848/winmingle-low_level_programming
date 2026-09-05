#include "main.h"
/* int i-checks the number of the current row
 * j-checks the number of spaces to be printed
 * if-conditinal statement checks if n is less than 0 and if yes skips the block
 * while- loop checks if i is greater than n and if yes skips the block
 *while- nested loop checks if j is less than i to print empty spaces
 * _putchar-prints new line
 */
void print_diagonal(int n){
    int i = 0;
    int j;
    if(n > 0){
      while( i < n){
	      j = 0;
	   while(j < i){
                _putchar(' ');
		j++;
	   }
         _putchar('\\');
	 _putchar('\n');
	 i++;
      }
    }
    _putchar('\n');
}
