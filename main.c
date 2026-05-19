#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int diceRolls[100];
    int counts[6] = {0}; // Array to count occurrences of each dice value   

    // Simulate 100 dice rolls
    for (int i = 0; i < 100; i++) {
        diceRolls[i] = (rand() % 6) + 1; // Generate a random number between 1 and 6
        counts[diceRolls[i] - 1]++; // Increment the count for the rolled value
    }

    // Print the counts for each dice value
    for (int i = 0; i < 6; i++) {
        printf("%d\n", counts[i]);
    }

    // Calculate and print the sum of all dice rolls
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        sum += diceRolls[i];
    }
    printf("%d\n", sum);

    // Calculate and print the mean as a float with one decimal place
    float mean = (float)sum / 100;
    printf("%.1f\n", mean);

    

    return 0;
}
