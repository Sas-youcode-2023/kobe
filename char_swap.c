#include <stdio.h>
#include <stdlib.h>

char sentence[] = "Quel sinistre mot!";
int m_index = -1;  // Initialize with a value that indicates not found
int s_index = -1;  // Initialize with a value that indicates not found
int i;
int size = sizeof(sentence) / sizeof(sentence[0]);

int main() {
    // Find the indices of the first occurrences of 'm' and 's'
    for (i = 0; i < size; i++) {
        if (sentence[i] == 'm' && m_index == -1) {
            printf("m index is: %d\n", i);
            m_index = i; // Set the index, but only if it's the first occurrence
        } else if (sentence[i] == 's' && s_index == -1) {
            printf("s index is: %d\n", i);
            s_index = i; // Set the index, but only if it's the first occurrence
        }

        if (m_index != -1 && s_index != -1) {
            break;  // Break the loop if both indices are found
        }
    }

    if (m_index != -1 && s_index != -1) {
        // Swap the characters at 'm' and 's' indices
        char temp = sentence[m_index];
        sentence[m_index] = sentence[s_index];
        sentence[s_index] = temp;

        printf("\nSwapped sentence: %s\n\n", sentence);
    } else {
        printf("'m' or 's' not found in the sentence.\n");
    }

    // Prompt user to input a random letter
    char random_letter;
    printf("Set a random letter between A-Z : ");
    scanf(" %c", &random_letter);

    int scanner = 0;
    // Find the first position of the random letter in the sentence
    int first_position = -1;
    for (i = 0; i < size; i++) {
        if (sentence[i] == random_letter) {
            first_position = i;
            break;  // Break after finding the first occurrence
        }
    }

    // Check and display whether the random letter is found in the sentence
    if (first_position != -1) {
        printf("YES !!!, I found \"%c\" in the sentence with the position %d\n\n", random_letter,first_position);
    } else {
        printf("\n'%c' not found in the sentence.\n", random_letter);
    }

    return 0;
}
