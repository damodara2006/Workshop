#include<stdio.h>
int main(){
    int a;
    int sum = 0;
    int x = 1;
    scanf("%d", &a);
    while(a>0){
        int r = a % 10;
        sum = sum + (r * x);
        x = x * 2;
        a = a / 10;
    }

    printf("%d", sum);
}