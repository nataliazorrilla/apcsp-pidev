#include <stdio.h>
#include <math.h>

float areaOfCircle(float r)
{
	return r * r * M_PI;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		float a = i + 3.5;
		printf("The area of a circle with radius %f is equal to %f\n", a, areaOfCircle(a));
	}
}
