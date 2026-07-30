#include<stdio.h>
/*Author:Idris Jimoh
Program:Winmingle Community C Training
Description:A C program that prints numbers without using char
*/
int main(){
//declaring variables
int i = 0;
//loop and conditions
while(i<=9) {
putchar(i + '0');
i++;
} 
putchar('\n');
return 0;
}
