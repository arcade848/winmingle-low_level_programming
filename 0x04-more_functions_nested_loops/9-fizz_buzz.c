#include <stdio.h>

int main(void) {
    int i;

    // Check your loops! Every { must have a matching }
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz");
        } else if (i % 3 == 0) {
            printf("Fizz");
        } else if (i % 5 == 0) {
            printf("Buzz");
        } else {
            printf("%d", i);
        }
        
        if (i < 100) {
            printf(", ");
        }
    } // <-- This ends the loop, NOT the main function!

    printf("\n"); // Line 21: Now safely inside main()
    return 0;    // Line 22: Now safely inside main()
}                // Line 23: Now closes the main() function safely

