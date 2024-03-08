#include<stdio.h>

int fac(int num);

void main(void){
    int num;
    printf("Enter a number to get factorial: ");
    scanf("%d",&num);
    printf("factorial = %d",fac(num));
}

int fac(int num){
    if(num == 0 || num == 1) return 1;
    else return num * fac(num - 1);
}