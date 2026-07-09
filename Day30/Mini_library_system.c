#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &b[i].id);
        printf("Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\nLibrary Records:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\n", b[i].id, b[i].name);
    }

    return 0;
}