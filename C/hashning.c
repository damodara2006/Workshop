#include<stdio.h>
void hash(int a[], int n){
    int max = a[0];
    int min = a[0];
    for (int i = 0; i<n; i++)
    {
        if(max<a[i])
            max = a[i];
        else if (min > a[i])
            min = a[i];
    }
    int hash[max + 1];
    for (int i = 0; i <=max; i++){
        hash[i] = 0;
    }
    for (int i = 0; i < n; i++){
        hash[a[i]]++;
    }
    // while(min<max){
    //     while(hash[max]==0)
    //         max--;
    //     while(hash[min]==0)
    //         min++;
    //     if(min<max){
    //         printf("%d %d ", max, min);
    //     min++;
    //     max--;

    //     }
    // }
    // if(n%2==1)
    //     printf("%d", min);

    for (int i = 0; i <n; i++){
        if(hash[a[i]]!=0)
        {printf("%d - %d\n", a[i], hash[a[i]]);
            hash[a[i]] = 0;
        }
    }

}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n;i++)
        scanf("%d", &a[i]);
    hash(a, n);
    return 0;
}