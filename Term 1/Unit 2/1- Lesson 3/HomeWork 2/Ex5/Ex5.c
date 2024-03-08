#include<stdio.h>
#include<string.h>

#define ASCI_a      65
#define ASCI_A      97
#define ASCI_z      90
#define ASCI_Z      122 

void main(void){
    char c ;
    printf("Enter a character: ");
    scanf("%c",&c);
    if ( (c >= ASCI_a) && (c <= ASCI_z) || (c >= ASCI_A) && (c <= ASCI_Z)){
        printf("%c is an alphabet",c);
    }else{
        printf("%c is not an alphabet",c);
    }
}