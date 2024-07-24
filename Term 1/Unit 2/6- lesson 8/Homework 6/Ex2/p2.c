#include<stdio.h>

int main(void){
    char alpha [26] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L'
     , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};
    char *p = &alpha[0];
    for(int i = 0 ; i < 26 ; i++){
        printf("%c ",*p);
        p+=1;
    }
}