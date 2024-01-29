#include<stdio.h>

int main() {
    
    int a = 1;
    int b = 3;
    int c = 4;
    
    // float d = (a + b + c) / 3.0;
    // float d = 1.0 * (a + b + c) / 3;
    float d = (float)(a + b + c) / 3;
    
    printf("%f", d);
}
