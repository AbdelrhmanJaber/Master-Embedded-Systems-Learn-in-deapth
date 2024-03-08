#include<stdio.h>

void main(void){
    int num , fac = 1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num < 0){
        printf("Error!! Factorial of negative doesn't exist\n");
    }else if(num == 0){
        printf("1");
    }else{
        for(int i = 1 ; i <= num ; i++){
            fac*=i;
        }
        printf("Factorial = %d",fac);
    }
}