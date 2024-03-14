#include<stdio.h>

#define NUMBER_OF_STUDENT         10 

typedef struct myStruct
{
    char name[50];
    float marks;
}personal_data;


personal_data get_data(personal_data data);
void display_data(personal_data data);

void main(void){
    personal_data student_data[NUMBER_OF_STUDENT];
    printf("Enter Information of students : ");
    printf("\n");
    for(int i = 0 ; i < NUMBER_OF_STUDENT ; i++){
        printf("for roll number %d\n",i+1);
        student_data[i] =  get_data(student_data[i]);
    }
    printf("\n");
    printf("Display the information of students ");
    printf("\n");
    for(int i = 0 ; i < NUMBER_OF_STUDENT ; i++){
        printf("for roll number %d\n",i+1);
        display_data(student_data[i]);
        printf("\n");
    }

}

personal_data get_data(personal_data data){
    printf("Enter name : ");
    fflush(stdin);
    gets(data.name);
    fflush(stdout);
    printf("Enter marks : ");
    fflush(stdin);
    scanf("%f",&data.marks);
    fflush(stdout);
    return data;
}

void display_data(personal_data data){
    fflush(stdin);
    printf("Name : %s\n",data.name);
    fflush(stdout);
    printf("marks : %0.2f\n",data.marks);
    fflush(stdout);
}