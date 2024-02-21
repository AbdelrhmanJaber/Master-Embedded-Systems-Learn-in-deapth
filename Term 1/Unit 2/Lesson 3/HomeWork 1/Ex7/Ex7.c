#include<stdio.h>

void main(void){
    int num1 , num2 , temp;
    printf("Enter value of a : ");
    scanf("%d",&num1);
    printf("Enter value of b : ");
    scanf("%d",&num2);
    num1 = num1 ^ num2 ;
    num2 = num1 ^ num2 ;
    num1 = num1 ^ num2 ;
    printf("After swapping, value of a = %d\n",num1);
    printf("After swapping, value of b = %d\n",num2);
}