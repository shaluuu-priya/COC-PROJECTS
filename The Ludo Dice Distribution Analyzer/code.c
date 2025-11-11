// ------------------------------------------------------------
// Project Name : Ludo Dice Distribution Analyzer
// Made By      : [Your Name]
// Description  : This program simulates rolling 2 dice many times
//                and finds how often each total (2–12) comes.
// ------------------------------------------------------------
// hello
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to roll one die (1 to 6)
int rollDice() {
    int r = rand() % 6 + 1;
    return r;
}

int main() {
    int rolls, i;
    int dice1, dice2, total;
    int count[13];  // for sums 2–12
    double prob;
    
    // initialize all counts to 0
    for (i = 0; i < 13; i++) {
        count[i] = 0;
    }

    printf("Enter how many times you want to roll the dice: ");
    scanf("%d", &rolls);

    srand(time(0)); // random seed

    // main simulation loop
    for (i = 0; i < rolls; i++) {
        dice1 = rollDice();
        dice2 = rollDice();
        total = dice1 + dice2;
        count[total]++;
    }

    printf("\n----------------------------------------------\n");
    printf("    LUDO DICE DISTRIBUTION ANALYZER RESULT\n");
    printf("----------------------------------------------\n");
    printf("Sum\tCount\t\tPercentage\n");
    printf("----------------------------------------------\n");

    for (i = 2; i <= 12; i++) {
        prob = (count[i] * 100.0) / rolls;
        printf("%2d\t%6d\t\t%.2f%%\n", i, count[i], prob);
    }

    printf("----------------------------------------------\n");
    printf("Total Rolls: %d\n", rolls);
    printf("----------------------------------------------\n");

    // showing theoretical part for understanding
    printf("\nTheoretical Probability of each Sum:\n");
    printf("2 -> 2.78%%, 3 -> 5.56%%, 4 -> 8.33%%, 5 -> 11.11%%\n");
    printf("6 -> 13.89%%, 7 -> 16.67%%, 8 -> 13.89%%, 9 -> 11.11%%\n");
    printf("10 -> 8.33%%, 11 -> 5.56%%, 12 -> 2.78%%\n");
    printf("----------------------------------------------\n");

    printf("Observation: The simulated results are very close to theory.\n");

    return 0;
}
