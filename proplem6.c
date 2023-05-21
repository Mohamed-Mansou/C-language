#include<stdio.h>
/*
print all the divisors of an integer
*/
int main(){
    int x;
    printf("Enter the integer x\n");
    scanf("%d",&x);
    for (int i = 1; i <= x/2; i++)
    {
        if (x % i ==0)
        {
            printf("%d\n",i);
        }
    }
    printf("%d\n",x);
    return(0);
}