#include<stdio.h>
#include"lifo.h"

#define bufferLenght   10

int main(void){
    lifo_t node;
    STACK_ENTRY buffer[bufferLenght];
    int data;
    lifo_init(&node , buffer , bufferLenght);
    printf("====================Push stack====================\n\n");
    lifo_push(&node , 1 );
    lifo_push(&node , 2 );
    lifo_push(&node , 3 );
    lifo_push(&node , 4 );
    lifo_push(&node , 5 );
    lifo_push(&node , 6 );
    printf("====================Push is done====================\n\n");
    printf("====================print stack====================\n\n");
    lifo_print(&node);
    printf("====================pop stack====================\n\n");
    lifo_pop(&node , &data);
    printf("%d is poped from stack\n",data);
    lifo_pop(&node , &data);
    printf("%d is poped from stack\n",data);
    lifo_pop(&node , &data);
    printf("%d is poped from stack\n\n",data);
    printf("====================print stack====================\n\n");
    lifo_print(&node);

    return 0;
}