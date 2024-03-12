#include<stdio.h>


void calulator(int a, int b, char operation) {

    switch(operation) {

        case '+':
            printf("a + b = %d", a+b);
            break;
        case '-':
            printf("a - b = %d", a-b);
            break;
        case '*':
            printf("a * b = %d", a*b);
            break;
        case '/':
            printf("a / b = %d", a/b);
            break;
        default:
            printf("Invalid operation");

    }
}


int main() {

    calulator(3, 6, '*');
}