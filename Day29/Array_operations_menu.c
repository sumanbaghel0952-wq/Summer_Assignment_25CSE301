#include <stdio.h>

int main() {
    int n, i, sum = 0, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for(i = 0; i < n; i++) {
        sum += arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);

    return 0;
}