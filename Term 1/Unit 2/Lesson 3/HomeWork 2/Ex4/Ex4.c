#include<stdio.h>

void main(void){
    float num;
    printf("Enter a number : ");
    scanf("%f",&num);
    if(num == 0){
        printf("you entered zero\n");
    }else if(num > 0){
        printf("you entered a positive number\n");
    }else{
        printf("you entered a negative number\n");
    }
}