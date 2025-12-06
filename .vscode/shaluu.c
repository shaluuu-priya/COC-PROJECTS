#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));  // Seed random generator

    int length = 6;
    int i;

    printf("%d-digit OTP is: ", length);

    for(i = 0; i < length; i++) {
        int digit = rand() % 10;  // Generate random digit
        printf("%d", digit);
    }

    printf("\n");
    return 0;
}
