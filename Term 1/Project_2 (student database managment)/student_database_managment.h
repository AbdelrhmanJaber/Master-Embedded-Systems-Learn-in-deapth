#ifndef STUDENT_DATABAASE_MANAGMENT_H_
#define STUDENT_DATABAASE_MANAGMENT_H_

#include"Platform_Types.h"



/**
 * @brief struct for queue entry 
 * each node represents a student and his data
 * 
 */


typedef struct student_data
{
    sint8_t fName[50];
    sint8_t lName[50];
    uint32_t roll;
    uint32_t coursesID[10];
    uint32_t coursesNumber;
    float32 gpa;
    struct student_data * next;
}studentDB;




/**
 * @brief struct for the queue it self 
 * it contains front , rear and the size of the queue
 * front and rear are considered queue entry node 
 * 
 */
typedef struct myStruct{
    uint32_t size;
    studentDB * front;
    studentDB * rear;
}queue;


/**
 * @brief enum for queue status
 * 
 */

typedef enum myEnum{
    QUEUE_NO_ERROR,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL,
    STUDENT_NOT_FOUND,
    STUDENT_FOUND
}stuentDB_status_t;



queue * createStudentDB(queue* q);

queue * addStudentFromFile(queue * q);

queue* addStudentManually(queue *q);

void findStudentByRollNumber(queue *q , uint32_t roll);

void findStudentByFirstName(queue *q , sint8_t fName[50]);

void findStudentsByCourseID(queue *q , uint32_t courseID);

void showAllStudent(queue * q);

uint32_t studentsCounts(queue * q);

queue *  updateStudentByRollNumber(queue * q , uint32_t roll);

queue * deleteStudentByRollNumber(queue * q , uint32_t roll);

#endif