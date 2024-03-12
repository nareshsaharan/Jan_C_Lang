#include <stdio.h>

int main(){
    
    
    int p, r, t;
    
    scanf("%d %d %d", &p, &r, &t);
    
    float si;
    
    si = (p*r*t)/100.0;
    
    printf("Simple Interest is: %.2f", si);
    
    
    return 0;
}

