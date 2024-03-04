#include<stdio.h>
#include<string.h>

void main(void){
    char srt_1[100] , str_2[100];
    printf("Enter a String: ");
    fflush(stdin);
    gets(srt_1);
    fflush(stdout);
    printf("Enter an username: ");
    fflush(stdin);
    gets(str_2);
    fflush(stdout);
    int difference = stricmp(srt_1 , str_2);
    if(!difference){
        printf("Identical");
    }else{
        printf("Different");
    }
}