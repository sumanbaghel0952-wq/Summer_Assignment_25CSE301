#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digits = 0;
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}