printf("1\n");
    goto jerry;

    tom:
        printf("2\n");
        return;

    jerry:
        printf("3\n");
        goto tom;