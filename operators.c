#include<stdio.h>

/*
assignment operators 
+= , -= ,*= , /= ,%= 
*/

int main () {
    int a=10 , b=20;
    printf("result=%d\n" , a+=5);
    printf("result=%d\n", b-=3);
    printf("result=%d\n", b-=a);
}