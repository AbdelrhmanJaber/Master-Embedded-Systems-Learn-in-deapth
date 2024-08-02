#ifndef LIFO_H_
#define LIFO_H_

/*to generalize the data type*/

#define STACK_ENTRY         int


/*struct for stack node*/

typedef struct myStruct{
    int lenght;
    int size;
    STACK_ENTRY * head;
    STACK_ENTRY * base;
}lifo_t;

/*enum for stack status*/

typedef enum myEnym{
    STACK_NO_ERROR,
    STACK_FULL,
    STACK_NOT_FULL,
    STACK_EMPTY,
    STACK_NOT_EMPTY,
    STACK_NULL
}STACK_ERROR_TYPE;

STACK_ERROR_TYPE lifo_init(lifo_t * lifo_node , STACK_ENTRY * buffer , int lenght);

STACK_ERROR_TYPE lifo_push(lifo_t * lifo_node , STACK_ENTRY data);

STACK_ERROR_TYPE lifo_pop(lifo_t * lifo_node , STACK_ENTRY * returnData);

STACK_ERROR_TYPE lifo_print(lifo_t * lifo_node);

STACK_ERROR_TYPE lifo_Is_Empty(lifo_t * lifo_node);

STACK_ERROR_TYPE lifo_Is_FULL(lifo_t * lifo_node);

STACK_ERROR_TYPE lifo_top_value(lifo_t * lifo_node , STACK_ENTRY * topValue);

#define NULL ((void *)0)

#endif