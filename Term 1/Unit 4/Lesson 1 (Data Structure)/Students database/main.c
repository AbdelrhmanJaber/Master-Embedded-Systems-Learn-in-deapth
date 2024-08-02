#include<stdio.h>
#include<stdlib.h>

#include"Platform_Types.h"
#include"studentDB.h"

#define ADD_STUDENT         1
#define DELETE_STUDENT      2
#define VIEW_STUDENT        3
#define DELETE_ALL_STUDENTS 4
#define CLOSE_THE_SYSTEM    5

void main(void){
    student * head = NULL;
    uint32_t option , id , flag = 0;
    printf("\n==============================Welcome to Students database==============================");
    while(1){
        printf("\n============================================================\n");
        printf("\nChoose one of the following options (write the option number) : \n");
        printf("1- Add Student \n");
        printf("2- Delete Student\n");
        printf("3- View Students\n");
        printf("4- Delete All Student\n");
        printf("5- Close the system");
        printf("\n============================================================\n");
        scanf("%d",&option);
        fflush(stdin);
        switch(option){
            case ADD_STUDENT :
            head = addStudent(head);
            break;
            case DELETE_STUDENT :
            printf("Enter the id of the student you want to delete : ");
            scanf("%d",&id);
            deleteStudent(head , id);
            break;
            case VIEW_STUDENT :
            viewStudents(head);
            break;
            case DELETE_ALL_STUDENTS:
            head = deleteAllStudents(head);
            break;
            case CLOSE_THE_SYSTEM :
            flag = 1;
            break;
            default:
            printf("you Entered wrong option\n");
            break;
        }
        if(flag) break;
    }
}