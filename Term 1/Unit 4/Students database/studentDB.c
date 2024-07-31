#include"studentDB.h"
#include<stdio.h>
#include<stdlib.h>

student * addStudent(student* head){
    /*check if it first node or not
      create node for the new student
      fill the student data
      put the node in its position in the list*/
      student * link = (student *)malloc(sizeof(student));
      if(head == NULL){
        /*it's first node*/
        addDataForStudent(link);
        link->next = NULL;
        head = link;
      }else{
        /*get the last node*/
        student * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        addDataForStudent(link);
        link->next = NULL;
        temp->next = link;
      }
      return head;
}

void addDataForStudent(student * link){
    printf("Enter the ID : ");
    scanf("%d",&link->id);
    fflush(stdin); fflush(stdout);
    printf("Enter your fill name : ");
    gets(link->name);
    fflush(stdin); fflush(stdout);
    printf("Enter height in cm : ");
    scanf("%d",&link->height);
    fflush(stdin); fflush(stdout);
}


student * deleteStudent(student * head , uint32_t id){
    student * temp = head;
    student * prev = head;
    uint8_t found = 0;
    /*if the student in first node of list*/
    if(temp->id == id){
        head = temp->next;
        prev->next = temp;
        free(temp);
        printf("the data of the student with id %d is deleted\n",id);
        return head;
    }else{
        temp = temp->next;
        while(temp != NULL){
            if(temp->id == id){
                found = 1;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        if(!found){
            printf("this ID is not found in the system\n");
            return head;
        }
        else{
            prev->next = temp->next;
            free(temp);
            printf("the data of the student with id %d is deleted\n",id);
        }
        return head;
    }   
}


void viewStudents(student * head){
    student * temp = head;
    uint16_t counter = 1;
    if(head == NULL){
        printf("The list is empty\n");
    }else{
    while(temp != NULL){
        printf("\nthe record number is %d\n",counter++);
        printf("ID : %d\n",temp->id);
        printf("Name : %s\n",temp->name);
        printf("height : %d\n",temp->height);
        temp = temp->next;
    }
    }
}


student * deleteAllStudents(student * head){
    student * temp = head;
    if(temp == NULL){
        printf("the list is empty\n");
    }else{
        while(temp!=NULL){
            student * deletedNode = temp;
            temp = temp->next;
            free(deletedNode);
        }
    }
    printf("\n=====================All Students data are deleted=====================\n");
    head = NULL;
    return head;
}