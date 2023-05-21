#include<stdio.h>
/*
check whether the integer is prime or not
*/
int main(){
    int x;
    int d;
    printf("Enter the integer x\n");
    scanf("%d",&x);
        for (int i = 2; i <= x/2; i++)
        {
            if (x % i ==0)
            {
                d++;
            }
        }
            if (d==0)
            {
                printf("%d is prime number",x);
            }
            else
            {
                printf("%d is not prime number",x);
            }
        }