#include<stdio.h>

int main(void){
    int arr[15] , numOfElements;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d",& numOfElements);
    fflush(stdin); fflush(stdout);
    int * p = &arr[numOfElements-1];
    printf("Input %d number of elements in the array : " , numOfElements);
    printf("\n");
    for(int i = 1 ; i <= numOfElements ; i++){
        printf("element %d : ",i);
        scanf("%d",&arr[i-1]);
    }
    printf("\n");
    printf("The elements of array in reverse order are : ");
    printf("\n");
    for(int i = numOfElements ; i > 0 ; i--){
        printf("element %d : %d\n",i , *p);
        p--;
    }
}