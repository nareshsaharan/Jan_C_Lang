void printCS(int n) {

    if(n == 0) {
        return ;
    }

    printCS(n - 1);
    printf("Cypher School\n");
}