#include<stdio.h>
/*
calculation sum of N integer
*/
int main (){
    int n , sum=0;
    printf("Enter the n integer\n");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        sum+=i;
    }
    printf("sum = %d ",sum);
}