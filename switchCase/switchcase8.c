#include<stdio.h>


void decideAPersion(char color) {

    switch(color) {

        case 'B' :
            printf("Tom\n");
            break;

        case 'R' :
            printf("Matt\n");
            break;

        case 'G' :
            printf("Henery\n");
            break;

        default:
            printf("None of them will go to the market");

    }

}


int main() {

    decideAPersion('B');
}