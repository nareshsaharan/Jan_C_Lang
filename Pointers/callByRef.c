void changeValue(int *a) {
    *a = 20;
}

int main()
{

    int a = 10;
    changeValue(&a);
    printf("%d", a);
}