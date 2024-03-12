#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before Reverse\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int si = 0;
    int ei = n - 1;

    while(si < ei) {

        int temp = arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;

        si++;
        ei--;
    }



    printf("\nAfter Reverse\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


}