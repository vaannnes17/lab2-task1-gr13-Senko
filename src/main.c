#include <stdio.h>
#include <string.h>

int countLetterN(const char *sentence) {
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == 'н' || sentence[i] == 'Н') {
            count++;
        }
    }
    return count;
}

