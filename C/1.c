#include<stdio.h>

// // extern int add(int a, int b);
// void main()
// {
//     char  *s1, *s2, *s3;
//     int a[5] = {1, 2};
//     int b;
//     // printf("%d\n", add(3, 5));
//     printf("%d %zu %zu\n", sizeof(a), sizeof(s2), sizeof(s3));
//     printf("%d %d", a[2], a[3]);
//     printf("\n%d",b);

//     // int a;
// }

// struct emp {
//     char name[20];
//     int age;
//     float sal;
// };

// int main() {
//     struct emp e; // No initialization
//     // e.name will be garbage
//     // e.age will be garbage
//     // e.sal will be garbage
//     printf("%s %d %d", e.name, e.age,e.sal);
//     return 0;
// }

// void fun() {
//     printf("Hello there");
// }

// int main() {
//     // Correct function pointer declaration
//     void (*p)() = fun;
    
//     // Correct format specifier to print the address of the function
//     printf("%p", p);

//     // Call the function using the pointer
//     (*p)();
    
//     return 0;
// }

    // int b = 10;
    // a = &b;
    // printf("%d", *a);
    
    
//     fun(){
//         hello:{
//             printf("Heyy\n");
//         }
//     }

// void main(){
//     int i = 1;
//     int k;
//     float j = 1.2222343;

//     char ch[] = "heyy there";

//     printf("%11s", ch);
//     printf("%.1f\n", j);


//     i < 2 ? k = 10 :( k = 20);
//     printf("%d", k);
// }

#include <stdio.h>

void counter() {
    // static int count = 0; // Initialized only once
    // count++;
    // printf("The count is: %d\n", count);
    int i = 3;
    i = i++;

    printf("\n\n%d %d %d", i, i++ ,++i);
}

int main() {
    int a = f;

    printf("%d", a);
    counter(); // Output: The count is: 1
    // counter(); // Output: The count is: 2
    // counter(); // Output: The count is: 3
    return 0;
}