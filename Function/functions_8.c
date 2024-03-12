#include<stdio.h>


int sumOfNNum(int n) {

    int s = 0;
    for(int i = 1; i <= n; i++) {
        s = s + i;
    }

    return s;
}


int main() {

  int ans = sumOfNNum(5);

  printf("%d", ans);
}