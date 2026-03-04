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

int main() {
    char sentence1[1000];
    char sentence2[1000];

    printf("Введите первое предложение: ");
    fgets(sentence1, sizeof(sentence1), stdin);

    printf("Введите второе предложение: ");
    fgets(sentence2, sizeof(sentence2), stdin);

    sentence1[strcspn(sentence1, "\n")] = 0;
    sentence2[strcspn(sentence2, "\n")] = 0;

    int count1 = countLetterN(sentence1);
    int count2 = countLetterN(sentence2);
    int total = count1 + count2;

    printf("\nРезультаты:\n");
    printf("В первом предложении букв 'н': %d\n", count1);
    printf("Во втором предложении букв 'н': %d\n", count2);
    printf("Общее количество букв 'н': %d\n", total);

    return 0;
}