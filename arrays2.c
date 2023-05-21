#include<stdio.h>
/*
Read Arrays from user
*/
int main(){
    int notes[2][2];
    for (int i = 0; i < 2; i++)
    {
                for (int j = 0; j < 2; j++)
                {
                    printf("Enter the value of notes:[%d] [%d]\n",i ,j);
                    scanf("%d",&notes[i][j]);
                }
                
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            {
                printf("notes [%d][%d] = %d\n",i,j,notes[i][j]);
            }
    }
return(0);
}