#include <stdio.h>

typedef struct x
{
  int feet;
  float inch;
} distance;

int main()
{
    distance firstDistance , secondDistance , sum;
  printf("Enter the information about 1st distance : \n");
  printf("Enter feet : ");
  fflush(stdin);
  scanf("%d",&firstDistance.feet);
  fflush(stdout);
  printf("Enter inch : ");
  fflush(stdin);
  scanf("%f",&firstDistance.inch);
  fflush(stdout);
  printf("\n");
  printf("Enter the information about 2nd distance : \n");
  printf("Enter feet : ");
  fflush(stdin);
  scanf("%d",&secondDistance.feet);
  fflush(stdout);
  printf("Enter inch : ");
  fflush(stdin);
  scanf("%f",&secondDistance.inch);
  fflush(stdout);

  sum.feet = firstDistance.feet + secondDistance.feet;
  sum.inch = firstDistance.inch + secondDistance.inch;

  while (sum.inch >= 12)
  {
    sum.inch = sum.inch - 12;
    sum.feet++;
  }

  printf("The Sum is %d feet, %.2f inches\n", sum.feet, sum.inch);
  return 0;
}