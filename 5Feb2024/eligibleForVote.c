#include <stdio.h>

int main(){
    
    int age;
    
    scanf("%d", &age);
    
    if(age >= 18) {
        printf("eligible");    
    }
    else 
    {
        printf("Not eligible");    
    }
    
    
    return 0;
}

