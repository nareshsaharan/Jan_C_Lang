int evenMult(int n) {

    int i = 2;
    int ans = 1;

    mult:
        if(i % 2 == 0) {
            ans = ans * i;
        }

        if(i >= n) {
            return ans;
        }

    nextVal:
        i += 2;
        goto mult;
}