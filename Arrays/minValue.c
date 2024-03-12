int minValue = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] < minValue) {
            minValue = arr[i];
        }
    }