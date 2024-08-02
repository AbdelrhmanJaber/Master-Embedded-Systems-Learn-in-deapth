#include<stdio.h>
#include"lifo.h"


STACK_ERROR_TYPE lifo_init(lifo_t * lifo_node , STACK_ENTRY * buffer , int lenght){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if(lifo_node == NULL | buffer == NULL) error_check = STACK_NULL;
    else if(0==lenght) error_check = STACK_EMPTY;
    else{
        lifo_node->base = buffer;
        lifo_node->head = lifo_node->base;
        lifo_node->lenght = lenght;
        lifo_node->size = 0;
    }
    return error_check;
}

STACK_ERROR_TYPE lifo_push(lifo_t * lifo_node , STACK_ENTRY data){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if(lifo_node == NULL | lifo_node->base == NULL | lifo_node->head == NULL) error_check = STACK_NULL;
    else if(lifo_Is_FULL(lifo_node) == STACK_FULL) error_check = STACK_FULL;
    else{
        *(lifo_node->head++) = data;
        lifo_node->size++;
    }
    return error_check;
}

STACK_ERROR_TYPE lifo_pop(lifo_t * lifo_node , STACK_ENTRY * returnData){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if(lifo_node == NULL | lifo_node->base == NULL | lifo_node->head == NULL | returnData == NULL) error_check = STACK_NULL;
    else if(lifo_Is_Empty(lifo_node) == STACK_EMPTY) error_check = STACK_EMPTY;
    else{
        *returnData = *(--lifo_node->head);
        lifo_node->size--;
    }
    return error_check;
}

STACK_ERROR_TYPE lifo_top_value(lifo_t * lifo_node , STACK_ENTRY * topValue){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if(lifo_node == NULL | lifo_node->base == NULL | lifo_node->head == NULL | topValue == NULL) error_check = STACK_NULL;
    else if(lifo_Is_Empty(lifo_node) == STACK_EMPTY) error_check = STACK_EMPTY;
    else
        *topValue = *((lifo_node->head) - 1);
    return error_check;
}

STACK_ERROR_TYPE lifo_Is_Empty(lifo_t * lifo_node){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if( 0 == lifo_node->size) error_check = STACK_EMPTY;
    return error_check; 
}

STACK_ERROR_TYPE lifo_Is_FULL(lifo_t * lifo_node){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if( lifo_node->lenght == lifo_node->size) error_check = STACK_EMPTY;
    return error_check; 
}


STACK_ERROR_TYPE lifo_print(lifo_t * lifo_node){
    STACK_ERROR_TYPE error_check = STACK_NO_ERROR;
    if(lifo_node == NULL | lifo_node->base == NULL | lifo_node->head == NULL) error_check = STACK_NULL;
    else if(0 == lifo_node->size) error_check = STACK_EMPTY;
    else{
        for(STACK_ENTRY * item = lifo_node->head -1  ; item >= lifo_node->base ; item--){
            printf("%d\n",*item);
        }
    }
    return error_check;
}
