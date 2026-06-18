#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    scanf("%d%d", &start, &end);

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0, digits = 0;

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
            printf("%d ", num);
    }

    return 0;
}