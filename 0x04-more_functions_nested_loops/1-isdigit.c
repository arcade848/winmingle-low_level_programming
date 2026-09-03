/** 
 * Author:Idris Jimoh
 * Program:Winmingle Community C Training
 * Description: A file that checks if a char is a digit
 * */
int _isdigit(int c);//prototype declaration
int _isdigit(int c){
if(c>='0' && c<='9'){// conditional statement
	return 1;// returns 1 if condition is true
}
return 0;//returns 0 if condition is false
}
