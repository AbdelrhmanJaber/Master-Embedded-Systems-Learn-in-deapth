#include<stdio.h>

int max_ones(int num){
    int count = 0 , max = 0;
    while(num != 0){
       num = num & (num>>1);
       count++;
    }
    return count;
}

void main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    fflush(stdout);
    printf("Max number of ones between two zeros = %d",max_ones(num));
}