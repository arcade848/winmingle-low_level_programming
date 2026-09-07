#include "main.h"
/**
*unsigned int-use for declarations because of negative numbers
*if-handles the negative numbers
*else-handles the positive numbers
*if-recursive calls start here
*_putchar-prints first digit 
**/
void print_number(int n){
     unsigned int n1;
	 if(n < 0){
        _putchar('-');
		n1 = -n;
	 }
	 else{
        n1 = n;
	 }
	 if(n1 / 10){
      print_number(n1 / 10);
	 }
	 _putchar((n1 % 10) + '0');
}
