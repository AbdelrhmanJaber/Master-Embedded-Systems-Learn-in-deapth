#include<stdio.h>

int main(void){
    int m = 29;
    int *p = &m;
    *p = 34;
    printf("variable = %d and pointer = %d\n",m,*p);
    *p = 7;
    printf("variable = %d and pointer = %d\n",m,*p);
}