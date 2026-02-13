#include<stdio.h>
int hash(int a[], int n,int b[], int m){
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);

        // hash[b[i]]++;
    }
    printf("\n");

    printf("\n");

    printf("\n");

    for (int i = 0; i < n; i++){
        if(max<a[i])
            max = a[i];
        else if(min>a[i])
            min = a[i];

    }
    for (int i = 0; i < m; i++)
    {
        if(max < b[i])
            max = b[i];
        else if(min > b[i])
            min = b[i];
    }
    int hash[max + 1];
    for (int i = 0; i <= max;i++){
        hash[i] = 0;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
        hash[a[i]]++;
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);

        hash[b[i]]++;
    }
    for (int i = 0; i <= max;i++){
        printf("%d - %d\n", i, hash[i]);
    }
        int sum = 0;
    for (int i = min; i <= max; i++)
    {
        sum = sum + hash[i] / 2;
    }
    printf("%d",sum);
}

int main() {
    int n, m;
    
    // Input size of first array
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d\n", &a[i]);

    // Input size of second array
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
        scanf("%d\n", &b[i]);

    // Print first array
    printf("Array A: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Print second array
    printf("Array B: ");
    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);
    printf("\n");

    return 0;
}