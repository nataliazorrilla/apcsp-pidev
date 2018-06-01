
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <errno.h>

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
		int check = 0;
		char input[256];
		float num;
	
		while (check !=1)
		{
			printf("Please enter numerical lower bound.\n");
			fgets(input, 256, stdin);
			if (sscanf (input, "%f", &num) != 1)
			{
				printf("No, that's not a float. ");
				check =  0;
			}
				
			else
			{
				lower = num;
				check = 1;
			}
		}
		check = 0;

		while (check != 1)
		{
			printf("Please enter numerical upper bound.\n");
			fgets(input, 256, stdin);
                        if (sscanf (input, "%f", &num) != 1)
                        {
                                printf("No, that's not a float. ");
                                check =  0;
                        }
                                
                        else
                        {
                                upper = num;
                                check = 1;
                        }
		}
	}

	float length = upper - lower + 1;

	for (int i = 0; i < length; i++)
	{
		float a = i + lower;
		printf("The area of a circle with radius %f is equal to %f\n", a, areaOfCircle(a));
		if (i >= length) break;
	}
}
