#include<stdio.h>

int reverse_digits(int num);

void main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d",reverse_digits(num));
}

int reverse_digits(int num){
    int reversNumber = 0 ;
    while (num != 0)
    {
       reversNumber =  (10 * reversNumber) + (num % 10)  ;
       num = num / 10;     
    }
    return reversNumber;
    
}