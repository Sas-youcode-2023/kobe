#include <stdio.h>
#include <string.h>

char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

void replace(char senct[]) {
    for (int i = 0; i < strlen(senct); i++) {
        for (int j = 0; j < 10; j++) {
            if (senct[i] == vowels[j]) {
                senct[i] = ' ';

            }
        }
    }
}

int main() {
    char sentence[] = "replace vowels and leave syllables";
    printf("\nOriginal sentence:\n%s\n\n", sentence);

    replace(sentence);

    printf("Modified sentence:\n%s\n\n", sentence);

    return 0;
}
