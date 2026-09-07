#include <stdio.h>
/**
*long- variable declaration as the value exceeds 2.14 billion of a standard 32-bit
*for-loops through the given number and check for it's prime factors
*while-loops through and check if the current prime fator can actually divide without a remainder
*if-prints the currents value of n 
**/
int main (){
long   n = 612852475143;
long largest_number = 0;
long i;
for(i = 2; i * i <= n; i++){
   while(n % i == 0){
        largest_number = i;
		n = n / i;
		}
   }
   if (n > 1){
      largest_number = n;
   }
   printf("%ld\n",largest_number);
   return 0;
}
