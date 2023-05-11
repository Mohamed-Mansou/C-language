#include<stdio.h>

/*
function structure
return type  function_name(data type 1,data type2,..);
*/
void sum (int,int);
int add (int,int);

int main(){
    int a=5 ,b=5, x=2 ,y=15 ,result;
    sum(a,b);
    result=  add( y,x);
    printf("sum=%d",result);
    return(0);
}
void sum(int a,int b){
    printf("%d + %d = %d\n " ,a,b,a+b);
}
int add (int y,int x){
    int r= x + y;
    return r ;
}