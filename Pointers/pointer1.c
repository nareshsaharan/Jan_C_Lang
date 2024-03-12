int a = 10;
    int *ptr = &a;
    int **dblPtr = &ptr;

    printf("%d\n", a);
    printf("%d\n", *ptr);
    printf("%d\n", **dblPtr);