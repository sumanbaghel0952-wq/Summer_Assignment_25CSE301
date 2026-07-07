#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length = %lu\n", strlen(str) - 1);

    printf("Reversed String: ");
    for(int i = strlen(str) - 2; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}