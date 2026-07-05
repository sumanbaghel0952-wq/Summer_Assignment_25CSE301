#include <stdio.h>

int main() {
    int n, i;
    float salary[50], total = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary[i]);
        total += salary[i];
    }

    printf("Total Salary = %.2f\n", total);
    printf("Average Salary = %.2f\n", total / n);

    return 0;
}