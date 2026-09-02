#include "main.h"
#include <stdio.h>
/**
*main - takes a  date and prints how many days are left in the year, taking 
*Leap yers into account
*Return: 0
**/
int main() {
int month = 2;
int day = 29;
int year = 2000;
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
print_remaining_days(month, day, year);
return 0;
}
