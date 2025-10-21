#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n], rev[n];

    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    for (int i=0; i<n; i++) {
        rev[i] = a[n-1-i];
    }
    printf("Array in reverse order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");

    return 0;
}
