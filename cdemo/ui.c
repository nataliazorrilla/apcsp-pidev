
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float areaOfCircle(float r)
{
	return r * r * M_PI;
}

int main(int argc, char* argv[])
{
	float lower;
	float upper;

	int arg = 0;
	if (argc == 3)
	{
		lower = atof(argv[1]);
		upper = atof(argv[2]);
	}
	else
	{
		printf("Please enter numerical lower bound.\n");
		char input[256];
		fgets(input, 256, stdin);
		lower = strtof(input, NULL);
		printf("Please enter numerical upper bound.\n");
		fgets(input, 256, stdin);
		upper = strtof(input, NULL);
	}

	float length = upper - lower + 1;

	for (int i = 0; i < length; i++)
	{
		float a = i + lower;
		printf("The area of a circle with radius %f is equal to %f\n", a, areaOfCircle(a));
		if (i >= length) break;
	}
}
