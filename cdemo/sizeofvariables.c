#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\n", a, sizeof(a));

	char b = 5;
	printf("char b value %c and size %d bytes.\n", b, sizeof(b));

	float c = 1.73;
	printf("float c value %f and size %d bytes.\n", c, sizeof(c));

	double d = 3.141592653589793238;
	printf("double d value %f and size %d bytes.\n", d, sizeof(d));

        signed char e = 5;
        printf("signed char e value %c and size %d bytes.\n", e, sizeof(e));
       
	unsigned char f = 5;
        printf("unsigned char f value %c and size %d bytes.\n", f, sizeof(f));
}
