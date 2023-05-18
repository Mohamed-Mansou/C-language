#include<stdio.h>
/*
call by reference
*/
int swap (int*,int*);
int main(){
    int a=5 ,b=15;
    printf("a=%d , b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d , b=%d",a,b);
}
int swap (int*a,int*b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}