#include<stdio.h>

int sum_digits(int num);

void main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d", sum_digits(num));
}


int sum_digits(int num){
    int sum = 0 ;
    while(num != 0){
         sum+= num%10;
         num = num/10;
    }
    return sum;
}