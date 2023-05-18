#include<stdio.h>
/*
find the min and max in set of n number
*/
int main (){
    int n ;
    printf("enter the number of integer\n");
    scanf("%d", &n);
    int t[n];
    for (int i = 0; i < n; i++)
    {
        printf("t(%d)=\n",i);
        scanf("%d",&t[i]);
    }
    int max=t[0] , min=t[0] ;
    for (int i = 1; i < n; i++)
    {
        if (t[i]>max)
        {
            max=t[i];
        }
    else if (t[i]<min)
    {
        min=t[i];
    }
    }
    printf("Max=%d\n",max);
    printf("Min=%d\n",min);
    return(0);
    }