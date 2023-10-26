   #include <stdio.h>

int main() {
    int i, j, n, temp;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int number[n]; // Use variable length array (if supported)

    printf("Enter the numbers:\n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (number[i] > number[j]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below:\n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);

    return 0;
}