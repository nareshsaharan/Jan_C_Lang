int maxValue = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    printf("%d", maxValue);