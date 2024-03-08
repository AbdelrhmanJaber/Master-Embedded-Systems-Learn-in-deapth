#include<stdio.h>

void main(void){
    float num1 , num2;
    printf("Enter two numbers : ");
    fflush(stdin);
    scanf("%f",&num1);
    scanf("%f",&num2);
    fflush(stdout);
    printf("%0.2f",num1+num2);
}