#include<stdio.h>
/*
Arrays
*/
int main(){
    int notes[5]={2,4,6,8,10};
    for (int i = 0; i < 5; i++)
    {
        notes[i]++;
    }
    
    for (int i = 0 ; i <5; i++)
    {
        printf("notes[%d] : %d \n", i+1 ,notes[i]);
    }
    return(0);
}