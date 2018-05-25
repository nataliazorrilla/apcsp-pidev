#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

	float d = 1.23;
	float e = 3.75;
	printf("The value of d is %f. The address of d is %d.\n", d, &d);
	printf("The value of e is %f. The address of e is %d.\n", e, &e);

	float* ptrtod;
	float* ptrtoe;
	
	ptrtod = &d;
	ptrtoe = &e;

	float temp = *ptrtod;
	*ptrtod = *ptrtoe;
	*ptrtoe = temp;

	printf("The value of ptrtod is %d. It stores the value %f. The address of d is %d.\n", ptrtod, *ptrtod, &d);
	printf("The value of ptrtoe is %d. It stores the value %f. The address of e is %d.\n", ptrtoe, *ptrtoe, &e);

}
