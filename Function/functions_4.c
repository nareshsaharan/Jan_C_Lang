#include<stdio.h>

// declare fun1
void fun1();
int add(int, float);


void fun2() {
    fun1();
    printf("fun2\n");
}


void fun1() {

    printf("fun1\n");
}

int add(int a, float b) {

    return 10;
}


int main() {

    fun1();
    fun2();

}