#include<stdio.h>
/*
calculate the reminder and quatioant without using divide operator
*/
int main(){
    int A , B ;
    int r , q=0;
    printf("Enter A\n");
    scanf("%d",&A);
    printf("Enter B\n");
    scanf("%d",&B);
    while (A>=B)
    {
        r=A-B;
        A=A-B;
        q++;
    }
    printf("Reminder=%d",r);
    printf("quatiant=%d",q);
}