#include<stdio.h>

int check_fourth_lsb(int num);
void main(void){
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    printf("the digit at 4th LSB: %d",check_fourth_lsb(num));
}

int check_fourth_lsb(int num){
    num = num>>3;
    return (num & 1);
}