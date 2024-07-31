#include"Platform_Types.h"


typedef struct myStruct{
    uint32_t id;
    uint32_t height;
    sint8_t name[50];
    struct myStruct * next;
}student;


/*1- Add student
  2- Add student help (static function)
  3- Delete student
  4- view student
  5- delete All */

student * addStudent(student* head);
void addDataForStudent(student * link);
student * deleteStudent(student * head , uint32_t id);
void viewStudents(student * head);
student * deleteAllStudents(student * head);
