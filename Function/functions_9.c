#include<stdio.h>


int fact(int n) {
    int nFact = 1;
    for(int i = 1; i <= n; i++) {
        nFact = nFact * i;
    }
    return nFact;
}


int main() {

    // nCr = n! / (r!) * (n-r)!

    int n = 5;
    int r = 2;

    int res = fact(n) / (fact(r) * fact(n-r));

    // int nFact = 1;
    // for(int i = 1; i <= n; i++) {
    //     nFact = nFact * i;
    // }

    // int rFact = 1;
    // for(int i = 1; i <= r; i++) {
    //     rFact = rFact * i;
    // }

    // int nrFact = 1;
    // for(int i = 1; i <= (n - r); i++) {
    //     nrFact = nrFact * i;
    // }


    // int res = nFact / (rFact * nrFact);

    printf("%dC%d : %d", n, r, res);
}