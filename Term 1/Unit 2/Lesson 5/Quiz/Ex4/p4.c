#include<stdio.h>


unsigned int asciiToDecimal(char arr[] , int size);

void main(void){
    char arr[5] = {'1' , '5' , '7' , '4' , '3'} ;
    printf("%d",asciiToDecimal(arr , 5)) ;
}

unsigned int asciiToDecimal(char arr[] , int size){
    int num = 0;
    for(int i = 0 ; i < size ; i++){
     num*=10;
     num+= arr[i] - '0';
    }
    return num;
}