#include<stdio.h>
#include<string.h>

void main(void){
    char sentence[100] , freqChar;
    int counter = 0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(sentence);
    printf("Enter a character to find the frequency : ");
    scanf("%c",&freqChar);
    for (int i = 0; i < strlen(sentence); i++)
    {
        if(sentence[i] == freqChar) counter++;
    }

    printf("frequence of %c = %d",freqChar , counter);
    
}