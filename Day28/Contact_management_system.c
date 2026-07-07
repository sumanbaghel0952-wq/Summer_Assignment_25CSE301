#include <stdio.h>

struct Contact {
    char name[50];
    long long mobile;
};

int main() {
    struct Contact c[5];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Mobile Number: ");
        scanf("%lld", &c[i].mobile);
    }

    printf("\nContact List\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s, Mobile: %lld\n",
               c[i].name, c[i].mobile);
    }

    return 0;
}