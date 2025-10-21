#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int a[N], pal[N];
    int count = 0;
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<N; i++) {
        int num=a[i];
        int rev=0, temp=num;

        while (temp>0) {
            rev=rev*10+temp%10;
            temp=temp/10;
        }

        if (rev==num) {
            pal[count]=num;
            count++;
        }
    }
    if (count==0) {
        printf("No palindrome numbers.\n");
    } else {
        printf("Palindrome numbers in the array are: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", pal[i]);
        }
        printf("\n");
    }

    return 0;
}
