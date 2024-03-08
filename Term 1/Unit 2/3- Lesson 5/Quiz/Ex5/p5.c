#include<stdio.h>

int clr_bit(int num , int position){
    num &= ~(1<<position);
    return num;
}

void main(void){
    int num , position;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Bit position: ");
    scanf("%d",&position);
    printf("Result = %d",clr_bit(num , position));
}