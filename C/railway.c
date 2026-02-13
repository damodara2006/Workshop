#include<stdio.h>
#include<string.h>
void railway(char a[]){
    int n = strlen(a);
    if (a[n-2]=='A'){

        if (a[0] == '1' && a[1] == '2')
        {
            a[0] ='0';
            a[1] ='0';
            a[n - 2] = '\0';
        }
    }
    else{
        if(!(a[0]=='1'&&a[1]=='2')){
            int z = ((a[0] - 48) * 10 + a[1] - 48)+12;
            a[1] = z % 10 + 48;
            // printf("%c", a[1]);
            a[0] = z / 10 + 48;
            a[n - 2] = '\0';
        }
    }
    a[n - 2] = '\0';
}

int main(){
    char a[50];
    scanf("%[^\n]s",a);
    railway(a);
    printf("%s", a);
}