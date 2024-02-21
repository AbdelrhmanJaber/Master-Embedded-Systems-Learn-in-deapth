#include<stdio.h>

void main(void){
    int num1 , num2;
    char operand;
    printf("Enter operator either + or - or * or / :- ");
    fflush(stdin);
    scanf("%c",&operand);
    fflush(stdout);
    switch (operand)
    {
    case '+':
        printf("Enter two numbers : ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("%d + %d = %d",num1 , num2 , num1+num2);
        break;
    case '-':
        printf("Enter two numbers : ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("%d - %d = %d",num1 , num2 , num1-num2);
        break;
    case '*':
        printf("Enter two numbers : ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("%d * %d = %d",num1 , num2 , num1*num2);
        break;
    case '/':
        printf("Enter two numbers : ");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("%d / %d = %d",num1 , num2 , num1/num2);
        break;
    default:
        printf("You Entered wrong operand\n");
        break;
    }
}