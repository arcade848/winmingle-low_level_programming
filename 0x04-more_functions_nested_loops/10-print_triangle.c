#include "main.h"
/**
*if-checks if size is less than zero and if yes, skips the block
*for-loop prints the nextline
*for-first nested loop prints '.'
*for-second nested loop prints '#' but as new line is printed,'.' decreases and
*'#' increases
**/
void print_triangle(int size){
int i;
int j;
int k;
if(size > 0){

   for(i = 0;i < size; i++){
       for(j =0; j < size - i - 1 ; j++){
           _putchar('.');
        }
       for(k = 0; k <= i; k++){
           _putchar('#');
        }     
       _putchar('\n');
    }  

}
else{
     _putchar('\n');
    } 
}
