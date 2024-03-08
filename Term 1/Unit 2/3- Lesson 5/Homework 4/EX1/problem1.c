#include<stdio.h>

int check_prime(int num);

void main(void){
    int start , end ;
    printf("Enter two numbers(interval): ");
    scanf("%d %d",&start ,&end);
    for(int i = start ; i <= end ; i++){
        if(check_prime(i)){
            printf("%d ",i);
        }
    }
}

int  check_prime(int num){
    int flag = 1;
    for(int i = 2  ; i <= num / 2 ; i++){
       if(num % i == 0){
        flag = 0;
        break;
       }
    }
    return flag;
}