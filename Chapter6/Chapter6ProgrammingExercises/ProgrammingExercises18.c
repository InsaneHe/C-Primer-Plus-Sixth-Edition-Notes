#include <stdio.h>

#define DUNBAR_NUMBER 150

int main(void) {
    int friends = 5; // Initial number of friends
    int week = 1; // Week counter

    // Loop until the number of friends exceeds Dunbar's number
    while (friends <= DUNBAR_NUMBER) {
        printf("Week %d: %d friends\n", week, friends);
        
        // N friends drop out and the remaining number doubles
        friends = friends - week;
        friends = (friends > 0) ? (friends * 2) : 0;
        
        week++; // Increment week counter
    }

    // Print the final week when the count exceeds Dunbar's number
    printf("Week %d: %d friends (exceeds Dunbar's number)\n", week, friends);

    return 0;
}