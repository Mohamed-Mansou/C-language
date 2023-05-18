#include<stdio.h>

/*
calling function by value
*/
void inc(int);
int main (){
    int a=5;
    inc(a);
    printf("main=%d",a);
}
void inc(int a){
    a++;
    printf("inc=%d\n",a);
}