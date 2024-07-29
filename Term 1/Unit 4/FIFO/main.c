#include<stdio.h>
#include"queue.h"

int main(void){
    queue_node_t  test1;
    QUEUE_ENTRY buf[10];
    if(RTOS_queue_init(&test1 , buf , 10) == QUEUE_NO_ERROR) printf("init is done without error\n\n");
    else printf("Error in Init\n");
    for(int i = 0 ; i < 8 ; i++){
        if(RTOS_queue_enqueue(&test1 , i) == QUEUE_NO_ERROR ){
            printf("Buffer enqueue %d correctly\n",i);
        }else{
            printf("Error in enqueue\n");
        }
    }

    int data;
     RTOS_queue_print_debug(&test1);
     RTOS_queue_dequeue(&test1 , &data);
     printf("dequeue %d is done\n",data);
     RTOS_queue_dequeue(&test1 , &data);
     printf("dequeue %d is done\n",data);
     RTOS_queue_print_debug(&test1);
}