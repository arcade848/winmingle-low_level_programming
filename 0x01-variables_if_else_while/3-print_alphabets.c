#include <stdio.h>
/*Author:Idris Jimoh
 * Program:Winmingle Community C Training
 * Description: A C program that prints lowercase and uppercase letters
 * */
int main(void){
//variable declaration
char d ='a';
// while loop and condition
while(d<='z'){
//code block
	putchar(d);
	d++;
}
d ='A';
while(d<='Z'){
	putchar(d);
	d++;
}
//output function
putchar('\n');
return (0);
}
