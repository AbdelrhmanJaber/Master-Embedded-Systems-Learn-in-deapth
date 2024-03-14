#include <stdio.h>
#define PI 3.14159

double areaCirlce (float radius);

int main()
{
	float radius ;

	printf ("Enter the radius : ");
	fflush (stdin);	
	scanf ("%f", &radius);
    fflush (stdout);

	printf ("The Area is: %0.2lf", areaCirlce(radius));

	return 0;
}


double areaCirlce (float radius)
{
	return (PI * radius * radius);
}