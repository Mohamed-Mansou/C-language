#include<stdio.h>
/*
Arrays 2D
*/
int main(){
    int notes[][4]={
        {2,4,6,8}, //notes0
        {3,5,10,9}, //notes1
        //notes2
        [3]={10,20,30,40} //notes3
        };
        printf("notes=%d\n",notes[1][0]);
        printf("notes=%d\n",notes[2][1]);
        printf("notes=%d\n",notes[3][3]);
        return(0);
}