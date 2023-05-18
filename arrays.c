#include<stdio.h>
/*
Read Arrays from user
*/
int main(){
    int notes[4];
    for (int i = 0; i < 4; i++)
    {
                printf("Enter the value of notes:%d \n",i);
                scanf("%d",&notes[i]);
    }
    for (int i = 0; i < 4; i++)
    {
    printf("notes %d = %d\n",i+1,notes[i]);
    }
    
return(0);
}