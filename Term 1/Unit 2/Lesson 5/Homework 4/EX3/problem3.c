#include<stdio.h>

void reverse_sentence(void);

void main(void){
    printf("Enter a sentence to reverse: ");
    reverse_sentence();
}

void reverse_sentence(void){
   char c ;
    if((c = getchar()) != '\n'){
        reverse_sentence();
    }
    printf("%c",c);
}