#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int sum = 0;
    int x = 1;
    while (a > 0)
    {
        int r = a % 2;
        a = a / 2;
        sum = sum + (r * x);
        x = x * 10;
    }
    printf("%d", sum);
}