#include <stdio.h>

/*
logical operators 
&& and must be all condition true to give 1(true)
|| or if one condition is true so it give 1 (true)
! nor 
*/
int main (){
    int a=5 , b=5 , c=7 , d=10 ,result;
    result= a==b && c>a;
    printf("result is %d\n" ,result);
    result= a==b && a>c;
    printf("result is %d\n" ,result);
    result= a==b && d>b && c>d ;
    printf("result is %d\n" ,result);
    result = a==b || d>c ;
    printf("result is %d\n" ,result);
    result = a==b || b>d ;
    printf("result is %d\n" ,result);
    result = a==b || c>d || a==c ;
    printf("result is %d\n" ,result);
    result= !(a==b);
    printf("result is %d\n" ,result);
    result= !(b>d);
    printf("result is %d\n" ,result);
    return(0);
}