#include<stdio.h>
/* 
outputs function:
1-printf
2-puts
puts("string");
printf("format specifier" ,arg1);
input function:
1-scanf
2-gets
scanf("%d%d", &a ,&b);
scanf("=%d%d", &a ,&b);
gets(variable name);
*/
int main(){
    // printf
    printf("Hello %s\n", "mohamed" );
    // puts
    char name[]="ali";
    puts(name);
    // scanf
    int age ,balance;
    scanf("%d%d", &age ,&balance);
    printf("hello ali your age is %d and balance is %d\n",age ,balance);
    //gets
    char name1[]="ahmed";
    gets(name1);
    puts(name1);
}