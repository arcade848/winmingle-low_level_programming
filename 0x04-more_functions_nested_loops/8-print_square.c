#include "main.h"
/*i,j- variable declaration
 * if-conditional statement checks if size is less than 0 and if yes skips the block
 * i-variable initialisation
 * while-loop prints # on the vertical column
 * while-nested loop prints # on the horizontal row
 */
void print_square(int size){
     int i;
     int j;
     if(size > 0){
       i = 0;
       while(i < size){
            j = 0;
	    while(j < size){
                 _putchar('#');
		 j++;
	    }
	      _putchar('\n');
	      i++;
       }
     }
      _putchar('\n');
}
