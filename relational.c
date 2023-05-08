#include<stdio.h>
/*
relational operators
== , != , < , > , <= , >= 
*/

int main (){
    int a=5 , b=5 , c=10 , d=15;
    printf("%d==%d is (%d)\n",a ,b , a==b);
    printf("%d!=%d is (%d)\n",c ,d , c!=d);
    printf("%d<%d is (%d)\n",d ,c , d<c);
    printf("%d>%d is (%d)\n",d ,c , d>c);
    printf("%d<=%d is (%d)\n",a ,b , a<=b);
    printf("%d>=%d is (%d)\n",a ,b , a>=b);
}
