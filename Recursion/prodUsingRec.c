int prodOfN(int n) {

    if(n == 1) {
        return 1;
    }

    // recAns
    int recAns = prodOfN(n - 1);

    //myans
    int myAns = recAns * n;

    return myAns;
}