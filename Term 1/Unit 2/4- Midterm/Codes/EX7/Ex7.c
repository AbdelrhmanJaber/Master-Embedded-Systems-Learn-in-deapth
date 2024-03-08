#include<stdio.h>

int get_sum(int num){
    static int sum = 0 ; 
    if(num > 0){
        get_sum(num - 1);
        sum += num;
    }
    return sum;
}

void main(void){
    printf("sum from 1 to 100 = %d",get_sum(100));
}

