#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] == '\n') {
        printf("Words = 0");
        return 0;
    }

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' &&
            str[i + 1] != '\0' && str[i + 1] != '\n')
            words++;
        i++;
    }

    printf("Words = %d", words);

    return 0;
}