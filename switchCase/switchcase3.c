#include<stdio.h>

int main() {
    char c = 'b';

    switch(c+1) {

        case 'a' + 1:
            printf("Apple");
            break;

        case 'b' + 1:
            printf("Banana");
            break;

        case 'c' + 1:
            printf("Chiku");
            break;

        default:
            printf("none");
    }

}