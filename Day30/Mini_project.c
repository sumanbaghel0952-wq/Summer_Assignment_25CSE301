#include <stdio.h>

void display(int arr[], int n) {
    int i;
    printf("Array Elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int sum(int arr[], int n) {
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += arr[i];
    return s;
}

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    display(arr, n);
    printf("\nSum = %d\n", sum(arr, n));

    return 0;
}