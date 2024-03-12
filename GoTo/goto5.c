void print1ToN(int n) {

    int i = 0;
    goto nextVal;

    printVal:
        printf("%d ", i);
        if(i == n) {
            return ;
        }


    nextVal:
        i++;
        goto printVal;


}