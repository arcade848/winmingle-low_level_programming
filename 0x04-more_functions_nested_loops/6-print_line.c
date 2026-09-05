#include "main.h"
void print_line(int n){
	int i = 0; //variable declaration
	if(n > 0){/*conditional statement checks if n is less than 0 and if yes skips the block*/
          while(i < n){ //conditional statement
	    _putchar('_');//printing underscores
	    i++;// increment
	  }
	}
     _putchar('\n');//printing new line
}
