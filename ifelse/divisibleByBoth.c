#include<stdio.h>

int main() {
    
    int num = 50;
    
    if(num % 5 == 0 && num % 11 == 0) {
        printf("yes it is divisible by both");
    }else {
        printf("no");
    }
}
