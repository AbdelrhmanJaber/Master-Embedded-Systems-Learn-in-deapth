#include<stdio.h>
#include<math.h>

double get_sqrt(int num);

void main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%lf",get_sqrt(num));
}

double get_sqrt(int num){
    return sqrt(num);
}
