#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Initialize random seed

    int length = 6;
    int i;

    printf("%d-digit OTP is: ", length);

    for (i = 0; i < length; i++) {
        int digit = rand() % 10;  // random digit (0–9)
        printf("%d", digit);
    }

    printf("\n");
    return 0;
}
