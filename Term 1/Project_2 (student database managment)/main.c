#include<stdio.h>
#include<stdlib.h>

#include"Platform_Types.h"
#include"student_database_managment.h"

void main(void){
    queue * q = (queue*) malloc(sizeof(queue));
    q = createStudentDB(q);
    q = addStudentManually(q);
    q = addStudentManually(q);
    showAllStudent(q);
}