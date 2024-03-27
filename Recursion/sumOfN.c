int sumOfN(int n) {

    // base case
    if(n == 1) {
        return 1;
    }

    // recAns
    int recAns = sumOfN(n-1);

    // myAns
    int myAns = recAns + n;
    return myAns;
}

int main() {

    int ans = sumOfN(5);
    printf("%d", ans);
}