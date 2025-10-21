#include <stdio.h>

int main() {
    int n, K;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &K);

    int greater=0, less=0, equal=0;

    for (int i=0; i<n; i++) {
        if (a[i]>K)
            greater++;
        else if (a[i] < K)
            less++;
        else
            equal++;
    }

    printf("Numbers greater than %d: %d\n", K, greater);
    printf("Numbers less than %d: %d\n", K, less);
    printf("Numbers equal to %d: %d\n", K, equal);

    return 0;
}
