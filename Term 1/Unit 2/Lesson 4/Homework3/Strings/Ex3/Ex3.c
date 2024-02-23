#include<stdio.h>
#include<string.h>

void main(void){
   char sentence[100] , reversedSentence[100];
   int count = 0;
   printf("Enter a String: ");
   fflush(stdin); fflush(stdout);
   gets(sentence);
   for(int i = strlen(sentence)-1 ; i >= 0 ; i--){
     reversedSentence[count++] = sentence[i];
   } 
   reversedSentence[count] = '\0';
   printf("Reverse String is : %s",reversedSentence);
}