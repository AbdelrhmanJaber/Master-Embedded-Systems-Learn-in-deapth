#include<stdio.h>

int main(void){
    char str[50];
    char reverse_str[50];
    char * forward_pointer = str;
    char * reverse_pointer = reverse_str;
    int index_string = 0 ;
    printf("Input string : ");
    gets(str);
    fflush(stdin); fflush(stdout);
    while(*forward_pointer){
        forward_pointer++; index_string++;
    }

    while (index_string >= 0)
    {
        forward_pointer--;
        *reverse_pointer = *forward_pointer;
        reverse_pointer++;
        index_string--;
    }
    *reverse_pointer = '\0';
    printf("Reverse the string : %s",reverse_str);
    
}