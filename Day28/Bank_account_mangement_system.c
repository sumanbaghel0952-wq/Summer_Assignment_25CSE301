#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Name: ");
    scanf("%s", a.name);

    printf("Enter Balance: ");
    scanf("%f", &a.balance);

    printf("\nAccount Details\n");
    printf("Account No: %d\n", a.accNo);
    printf("Name: %s\n", a.name);
    printf("Balance: %.2f\n", a.balance);

    return 0;
}