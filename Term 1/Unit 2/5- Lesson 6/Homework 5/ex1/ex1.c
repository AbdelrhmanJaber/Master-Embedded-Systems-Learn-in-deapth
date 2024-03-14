#include<stdio.h>


typedef struct myStruct
{
    char name[50];
    int rollNumber;
    float mark;
}personal_data;


void main(void){
    personal_data person;
    printf("Enter name : ");
    fflush(stdin);
    gets(person.name); fflush(stdout);
    printf("Enter roll number : ");
    scanf("%d",&person.rollNumber);
    fflush(stdout);
    printf("Enter marks : ");
    scanf("%f",&person.mark);
    fflush(stdout);

    printf("Displaying Information\n");
    printf("name : %s\n",person.name);
    printf("Roll : %d\n",person.rollNumber);
    printf("Marks : %0.2f\n",person.mark);


}