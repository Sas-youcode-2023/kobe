#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));
    int min = 1;
    int max = 30;
    int i;
    int guess;
    printf("guess a numbers between %d and %d:\n", min, max);

    int randomInRange = min + rand() % (max - min + 1);

    for ( i = 1; i <= 5; i++) {
        printf("attempt number %d : ", i);
        scanf("%d", &guess);

        if (guess == randomInRange && i == 1) {
            printf("Good !! , YOU won 15 DH from guessing the number in the first try\n");
            break;
        } else if (guess == randomInRange && i == 2) {
            printf("Good !! , YOU won 10 DH from guessing the number in the second try\n");
            break;
        } else if (guess == randomInRange && i == 3) {
            printf("Good !! , YOU won 5 DH from guessing the number in the third try\n");
            break;
        } else if (guess == randomInRange && i == 4) {
            printf("Good !! , YOU won 1 DH from guessing the number in the fourth try\n");
            break;
        } else if (guess == randomInRange && i == 5) {
            printf("YOU didn't win anything from guessing the number above the fourth try :)\n");
        } else if (guess < randomInRange) {
            printf("no , it's higher\n");
        } else if (guess > randomInRange) {
            printf("no , it's lower\n");
        }
    }

    if (i > 5) {
        printf("try next time (the number was : %d)\n", randomInRange);
    }

    return 0;
}
