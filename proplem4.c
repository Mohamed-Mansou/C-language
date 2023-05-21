#include<stdio.h>
/*
calculate the product of two numbers without using x
*/
int main(){
int x ,y;
int p=0;
printf("Enter x\n");
scanf("%d",&x);
printf("Enter y\n");
scanf("%d",&y);
for (int i = 1; i <= y; i++)
{
    p=p+x;
}
printf("the product = %d",p);
}