#include<stdio.h>

int main() {
    int a = 1000, b = 105, c = 30;
    
    if(a > b && a > c) {
        printf("%d", a);
    }
    else if(b > c) {
        printf("%d", b);
    }
    else {
        printf("%d", c);
    }
}

