#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"student_database_managment.h"

static studentDB * helpAddStudent(studentDB * temp);
static void helpPrintStudentsData(studentDB * temp);
static studentDB * helpFindStudentByRollNumber(studentDB * temp , uint32_t roll , uint8_t * flag);
static stuentDB_status_t helpFindStudentByFirstName(studentDB * temp , sint8_t fName[50]);

queue * createStudentDB(queue* q){
    q->size = 0;
    q->front = NULL;
    q->rear = NULL;
    return q;
}

queue* addStudentManually(queue *q){
    studentDB * student = (studentDB *) malloc(sizeof(studentDB));
    if(student != NULL){
        student = helpAddStudent(student);
        student->next = NULL;
        /*CHECK IF FIRST NODE*/
        if(q->rear == NULL) q->front = student; 
        else q->rear->next = student;
        q->rear = student;
        q->size++;
    }
    else{
        return NULL;
    }
}

void findStudentByRollNumber(queue *q , uint32_t roll){
    stuentDB_status_t status;
    uint8_t flag = 0;
    if(q != NULL){
        studentDB * temp = q->front;
        temp = helpFindStudentByRollNumber(temp , roll , &flag);
        if(flag == 1){
            printf("\nThis roll Number is found !\n");
            helpPrintStudentsData(temp);
        }
        else printf("\nThis roll Number isn't found in the system\n");
    }
    else printf("\nThere is not any database for student\n");  
}

void findStudentByFirstName(queue *q , sint8_t fName[50]){
    stuentDB_status_t status;
    if(q != NULL){
        studentDB * temp = q->front ;
        status = helpFindStudentByFirstName(temp , fName);
        if(status == STUDENT_FOUND){
            printf("\nThis Name is found\n");
            helpPrintStudentsData(temp);
        }
        else if(status == STUDENT_NOT_FOUND) printf("\nThis first Name isn't found in the system\n");
    }
    else printf("\nThere is not any database for student\n");
}

void findStudentsByCourseID(queue *q , uint32_t courseID){

}

void showAllStudent(queue * q){
    studentDB * temp = q->front;
    while (temp != NULL)
    {
        helpPrintStudentsData(temp);
        printf("\n===========================================================\n");
        temp = temp->next;
    }
    
}

uint32_t studentsCounts(queue * q){
    return q->size;
}

queue *  updateStudentByRollNumber(queue * q , uint32_t roll){

}

queue * deleteStudentByRollNumber(queue * q , uint32_t roll){

}



static studentDB * helpAddStudent(studentDB * temp){
    printf("Enter your first name : ");
    fflush(stdin); fflush(stdout);
    gets(temp->fName);
    fflush(stdin); fflush(stdout);
    printf("Enter your last name : ");
    fflush(stdin); fflush(stdout);
    gets(temp->lName);
    fflush(stdin); fflush(stdout);
    printf("Enter your unique roll number : ");
    scanf("%d",&temp->roll);
    fflush(stdin); fflush(stdout);
    printf("Enter your GPA : ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&temp->gpa);
    fflush(stdin); fflush(stdout);
    printf("Enter number of courses you want to register (from 1 to 10) : ");
    scanf("%d",&temp->coursesNumber);
    fflush(stdin); fflush(stdout);
    while(temp->coursesNumber > 10){
      printf("Wrong Input \n");
      printf("Enter number of courses you want to register (from 1 to 10) : ");
      scanf("%d",&temp->coursesNumber);
    }
    for(uint8_t i = 0 ; i < temp->coursesNumber ; i++){
        printf("The course ID number %d is : ",i+1);
        scanf("%d",&temp->coursesID[i]);
    }
    return temp;

}



static void helpPrintStudentsData(studentDB * temp){
    printf("\nStudent first name is : %s\n",temp->fName);
    fflush(stdin); fflush(stdout);
    printf("\nStudent last name is : %s\n",temp->lName);
    fflush(stdin); fflush(stdout);
    printf("\n%s's roll number is : %d\n", temp->fName , temp->roll);
    fflush(stdin); fflush(stdout);
    printf("\n%s's GPA is : %0.2f\n", temp->fName , temp->gpa);
    fflush(stdin); fflush(stdout);
    for(uint8_t i = 0 ; i < temp->coursesNumber ; i++){
        printf("\nCourse number %d ID is : %d\n",i+1 , temp->coursesID[i]);
    }
}


static studentDB * helpFindStudentByRollNumber(studentDB * temp , uint32_t roll , uint8_t * flag){
     stuentDB_status_t status;
     *flag = 0;
    if(temp != NULL){
        while(temp != NULL){
            if(temp->roll == roll){
                *flag = 1;
                break;
            }
            temp = temp->next;
        }
    }
    return temp;
}



static stuentDB_status_t helpFindStudentByFirstName(studentDB * temp , sint8_t fName[50]){
    stuentDB_status_t status;
    if(temp != NULL){
        uint8_t flag = 0;
        while(temp != NULL){
            if(!strcmp(temp->fName , fName)){
                flag = 1;
                break;
            }
            temp = temp->next;           
        }
        if(flag) status = STUDENT_FOUND;
        else status = STUDENT_NOT_FOUND ;
        if(temp == NULL) status = QUEUE_NULL;
    }
    else{
        status = QUEUE_NULL;
    }
    return status;
}