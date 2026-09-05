#include "main.h"
/**
 * Author:Idris Jimoh
 * Program: Winmingle Community C Training
 * Description:a file that prints 0-14 and loops it 10 times
 **/
void more_numbers(void){//prototype
     int i = 0; // variable declaration
     int c;
     while(i < 10){ //loop and condition

          c = 0; // variable intialization
	  while( c <= 14){ //nested loop and condition
		if(c > 9){
                 _putchar((c / 10 )+ '0'); // prints tens digit
		}
               _putchar((c % 10)+ '0'); // prints units digit
		c++; //incremental
	  }
	  _putchar('\n'); //nextline
	  i++; //incremental
     }
     
}
