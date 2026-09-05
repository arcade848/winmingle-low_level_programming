#include "main.h"
/**
 * Author:Idris Jimoh
 * Program:Winmingle Community Training
 * Description:a file that prints most numbers excluding some
 * */
void print_most_numbers(void){// func definition
     char c = '0'; //variable declaration
     while(c <= '9'){ //loop and condition
         if( c != '2' && c != '4' ){ //nested conditional statement which excludes 2 and 4
          _putchar(c);//printing char
	 }
	 c++;//incremental
}
   _putchar('\n');// nextline
   }
