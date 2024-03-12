#include<stdio.h>

int add(int a, int b) {
    int c = a + b;
    return c;
}


char changeToCapitalChar(char c) {
    char x = c - 'a' + 65;
    return x;
}

float multi(float a, int c) {

    float ans = a * c;
    return ans;
}

void fun() {
    printf("I am doing fun at here :), you guys wanna join ???\n");
}

int main() {

    fun();

    float b = multi(2.4, 2);
    printf("%f\n", b);

    char a = changeToCapitalChar('g');
    printf("%c\n", a);

    int out = add(3, 4);
    printf("%d\n", out);

    int out2 = add(5, 7);
    printf("%d", out2);
}