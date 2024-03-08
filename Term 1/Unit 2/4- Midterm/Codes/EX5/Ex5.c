#include<stdio.h>

int count_ones(int num);

void main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d",count_ones(num));
}

int count_ones(int num){
    int count = 0;
    while(num != 0){
         if(num & 1) count++;
         num = num>>1;
    }
    return count;
}