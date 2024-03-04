#include<stdio.h>

int get_power(int num);

void main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",get_power(num));
}

int get_power(int num){
    if(num == 1 || num == 0 ) return num;
    else get_power(num-1);
    num*=num;
}