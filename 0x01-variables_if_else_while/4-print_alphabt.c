#include <stdio.h>
/*Author:Idris Jimoh
 * Program:Winmingle Community C Training
 * Description:A C program that prints some letters excluding some
 */
int main(){
//declaring variables
 char a ='a';
 //loop and conditions
 while(a<='z'){
//loop and logical conditions
if(a !='e' && a !='q'){
 putchar(a);
}
a++;
}
putchar('\n');
return 0;
}
