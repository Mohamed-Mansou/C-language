#include<stdio.h>
/*
if statment 
if(condition){
    peace of code
}
*/

int main(){

    char cartoon[]= " attack on titan \n one piece \n konan \n";
    char movie[]= "game of thrones\n breaking bad \n walking dead \n ";
    int age ; 
    scanf("%d" ,&age);
    printf("your age is %d\n",age);
    if (age>18)
    {
        puts(movie);
    }
    return(0);
}