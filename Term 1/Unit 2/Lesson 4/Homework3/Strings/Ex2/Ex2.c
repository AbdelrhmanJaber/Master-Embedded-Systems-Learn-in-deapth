#include<stdio.h>
#include<string.h>

void main(void){
    char sent[100];
    int i = 0 ;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(sent);
    while (sent[i] != 0)
    {
        i++;
    }
    printf("Lenght of string = %d",i);
}