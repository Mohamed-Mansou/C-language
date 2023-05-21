#include<stdio.h>
/*
check if a divisible by b or not
*/
int main (){
    int x ,y;
    printf("Enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    if (x%y==0)
    {
        printf("x is divisible by y");
    }
    else
    {
        printf("x is not divisible by y");
    }
return(0);
}
