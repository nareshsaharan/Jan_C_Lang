#include <stdio.h>

/*
    5
    10 20 3 40 5
*/
void printArr(int arr[]) {

    arr[0] = 100;
    //printf("%d", arr[0]);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printArr(arr);
    printf("%d", arr[0]);

    return 0;
}