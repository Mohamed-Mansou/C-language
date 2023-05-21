#include<stdio.h>
/*
structure statment
struct structure_name {
    member_1  Ex:age
    member_2
    member_3
}structure_variable
*/
struct person
{
    int age;
    char name[30];
    float weight;
} var1,var2;
int main(){
    struct person;
printf("enter age of var1:");
scanf("%d",&var1.age);
printf("age=%d",var1.age);
}
