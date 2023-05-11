#include<stdio.h>
/*
elif statment
*/
int main() {
    char movie []="Got , lacasa , vikings";
    char anime[]= "konan,attack,naruto";
    char cartoon[]="tom&jerry";
    int age;
    printf("your age is %d",age);
    scanf("%d",&age);
    if (age>=18)
    {
        puts(movie);
    }
    else if (age>10)
    {
        puts(anime);
    }
    else{
        puts(cartoon);
        }
    return(0);
}