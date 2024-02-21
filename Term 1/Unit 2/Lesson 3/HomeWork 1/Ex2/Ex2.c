#include<stdio.h>

void main(void){
    int num;
    printf("Enter an Integer: ");
    fflush(stdin);
    scanf("%d",&num);
    printf("You entered : %d",num);
}