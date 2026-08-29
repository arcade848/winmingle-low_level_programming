#include "main.h"
#include <stdio.h>
/*Author:Idris Jimoh
*Program:Winmingle community C Training
*Description:
int-variable declaration
if-checks if condition is true else moves to the else block
*/
void print_times_table(int n) {
if( n < 0 || n > 15 ) {
return;
} else {
int i = 0;
int j;

 while(i <= n ) { 
 j =0;
 while(j <= n) { 
 printf( "%d", i * j ) ;
 if (j != n) { 
 printf(",");
 printf(" ");
  
  }
  j++;
}
i++;
printf("\n");
} 
printf("\n");
} 
}
