#include<stdio.h>

void main(void){
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c",&alphabet);
    switch (alphabet)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case 'i':
    case 'I':
        printf("%c is vowel\n",alphabet);
        /* code */
        break;
    
    default:
        printf("%c is constant ",alphabet);
        break;
    }
}