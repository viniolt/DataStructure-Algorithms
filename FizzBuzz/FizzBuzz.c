#include <stdio.h>

int main(void) {
    for (int i = 0; i<=1000; i++) {
        if (i%15==0) {
            printf("FizzBuzz\n");
        }
        else if (i%3==0) {
            printf("Fizz\n");
        }
        else if (i%5==0) {
            printf("Buzz\n");
        }
        else {
            printf("%i\n", i);
        }

        }
    }
