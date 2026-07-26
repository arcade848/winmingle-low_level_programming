#include <stdio.h>
/*Author:Idris Jimoh
*Program:Winmingle Community c Training
*Description: A C program that print alphabet in lowercase, followed by a new line.
*/
int main(){
//variable declaration
char c='a';
//while loop execution
while( c<='z'){
putchar(c);
c++;
putchar('\n');
}
return 0;
}

