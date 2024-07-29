#ifndef QUEUE_H
#define QUEUE_H


#define QUEUE_ENTRY         int


typedef enum myEnym{
    QUEUE_NO_ERROR,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL
}QUEUE_ERROR_TYPE;


typedef struct myStruct{
    int size;
    int lenght;
    QUEUE_ENTRY * front;
    QUEUE_ENTRY * rear;
    QUEUE_ENTRY * base;
}queue_node_t;




QUEUE_ERROR_TYPE RTOS_queue_init(queue_node_t* fifo_node , QUEUE_ENTRY * buffer , int lenght );
QUEUE_ERROR_TYPE RTOS_queue_enqueue(queue_node_t * fifo_node , QUEUE_ENTRY  data);
QUEUE_ERROR_TYPE RTOS_queue_dequeue(queue_node_t * fifo_node , QUEUE_ENTRY*  return_data);
QUEUE_ERROR_TYPE RTOS_queue_IS_FULL(queue_node_t * fifo_node);
QUEUE_ERROR_TYPE RTOS_queue_IS_EMPTY(queue_node_t * fifo_node);
QUEUE_ERROR_TYPE RTOS_queue_print_debug(queue_node_t * fifo_node);
#endif