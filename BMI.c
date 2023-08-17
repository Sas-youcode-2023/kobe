#include <stdio.h>
#include <stdlib.h>

float weight[100];
float hight[100];
int i = 0;
float TOTAL;

int main() {
    // Collect weights of patients
    while (1) {
        printf("set the weight number %d (enter 0 or a negative number to move on): ", i + 1);
        scanf("%f", &weight[i]);

        if (weight[i] <= 0) {
            break;
        }

        TOTAL = TOTAL + weight[i];
        i++;
    }

    printf("number of patients are %d\n", i);

    int counter = i;

    // Collect heights of patients
    for (i = 0; counter > 0; i++) {
        printf("set the height number %d : ", i + 1);
        scanf("%f", &hight[i]);
        counter--;
    }

    if (i > 0) {
        float AVERAGE = TOTAL / i;
        printf("THE WEIGHT AVERAGE IS : %f\n", AVERAGE);
    }

    counter = i;

    // Calculate and display BMI for each patient
    for (i = 0; counter > 0; i++) {
        float IMC = weight[i] / (hight[i] * hight[i]);
        printf("patient number %d IMC %0.2f\n", i + 1, IMC);

        // Categorize BMI and provide feedback
        if (IMC < 18.5) {
            printf("pas assez\n"); // Underweight
        } else if (IMC > 25) {
            printf("trop\n"); // Overweight
        } else {
            printf("normal\n"); // Normal weight
        }

        counter--;
    }

    return 0;
}
