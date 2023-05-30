#include<stdio.h>

void sort(int n)
{
    int a[n];
    int b[n]; // Array to store the original sequence
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i]; // Store the original sequence
    }

    // Sorting the array in ascending order
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    // Printing the numbers in ascending order
    for(int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }

    printf("\n");

    // Printing the original sequence
    for(int i = 0; i < n; i++){
        printf("%d\n", b[i]);
    }
}

int main()
{
    int n = 3; // Number of input values
    sort(n);
    return 0;
}
