#include<stdio.h>


void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;

    printf("swap fun: a=%d b=%d\n", *a, *b);

}

int main() {

    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("main fun: a=%d b=%d\n", a, b);
}