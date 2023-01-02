//Author : Vishvesh Modcoicar
#include <stdio.h>
int main(){
    int x;
    int y;
    int operator;
    printf("Enter x value:");
    scanf("%d",&x);
    printf("Enter y value:");
    scanf("%d",&y);
    printf("Enter Operator To Use :\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)");
    scanf("%d",&operator);
    switch(operator)
    {
    case 1:
    printf("Answer Is %d",x+y);
    break;
    case 2:
    printf("Answer Is %d",x-y);
    break;
    case 3:
    printf("Answer Is %d",x*y);
    break;
    case 4:
    printf("Answer Is %d",x/y);
    break;
    default:
    printf("Try Again");
    }
    return 0;

}   