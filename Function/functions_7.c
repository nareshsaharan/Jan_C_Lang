#include<stdio.h>

int power(int x, int y) {

    int res = 1;

    for(int i = 1; i <= y; i++) {
        res = res * x;
    }

    return res;
}


int main() {

  int ans = power(2, 5);

  printf("%d", ans);
}