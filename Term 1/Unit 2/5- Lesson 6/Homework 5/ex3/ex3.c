#include<stdio.h>


typedef struct x
{
    float real;
    float conj;
}complex;


void main(void){
complex firstNumber , secondNumber , sum;
printf("Input data for first number \n");
printf("Enter real and imaginary respectively : ");
scanf("%f %f",&firstNumber.real ,& firstNumber.conj);
printf("\n");
printf("Input data for second number \n");
printf("Enter real and imaginary respectively : ");
scanf("%f %f",&secondNumber.real ,& secondNumber.conj);

sum.real = firstNumber.real + secondNumber.real;
sum.conj = firstNumber.conj + secondNumber.conj;

printf("Sum = %0.2f + %0.2fi",sum.real , sum.conj);

}