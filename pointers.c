#include<stdio.h>
/*
pointers:
data_type* pointer name;
*/
int main(){
    int var = 40;
    int* ptr= &var; //&=give the address of var
    printf("value=%p",&var);
    printf("\nvalue=%p",ptr);
    printf("\nvalue=%d",*ptr); //* to give the value of the variable 
    return(0);
}