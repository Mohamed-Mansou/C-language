#include<stdio.h>

# define Var1 5 //constant 
# define Var2 10

int main() {
    const int var3=144;
    printf("%d,%d\n",Var1,Var2);
    printf("cons=%d",var3);
    printf("%s\n",__FILE__); //predifined word Print the name of file 
    printf("%s\n",__TIME__); // print the time 
    printf("%s\n",__DATE__); // print the date 
}
