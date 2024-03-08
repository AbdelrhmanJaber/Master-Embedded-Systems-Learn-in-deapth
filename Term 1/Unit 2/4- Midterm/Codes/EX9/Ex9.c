#include<stdio.h>
#include<string.h>

void reverse_name(char name[]){
    int index = 0;
    /*print second name*/
    for(int i =  0 ; i < strlen(name) ; i++){
        if(name[i] == ' '){
            for(int j = i+1 ; j < strlen(name) ; j++)
                printf("%c",name[j]);
            }
        }
        printf(" ");
        /*print first name*/
        while(name[index] != ' '){
            printf("%c",name[index]);
            index++;
        }
    }

 
void main(void)
{
    printf("Enter your name : ");
    char name[100];
    fflush(stdin);
    gets(name);
    fflush(stdout);
    reverse_name(name);
}