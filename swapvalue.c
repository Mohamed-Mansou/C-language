#include<stdio.h>
/*
swapping value of variables
*/
int swap(int,int);
int main(){
    int a=8 ,b=10;
    swap(a,b);
    printf("\na=%d,b=%d",a,b);
}
int swap(int a,int b){
    int tmp=a;
    a=b;
    b=tmp;
    printf("a=%d b=%d",a,b);

    
}
