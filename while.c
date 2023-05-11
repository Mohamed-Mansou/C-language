#include<stdio.h>
/*
while statment
stat1
while(condition){
    peace of code
    stat2
}
*/
int main(){
    int s=0;
    int i=0;
    int n;
    printf("n=");
    scanf("%d",&n);
    while (i<=n)
    {
        s +=i;
        i++;
    }
    printf("sum=%d",s);
    return(0);
}
// int i;
//     i=0;
//     while (i<10)
//     {
//         printf("number=%d\n",i);
//         i++;
//     }
//     return(0);