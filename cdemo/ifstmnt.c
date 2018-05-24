#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
    
	int b = 5;
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }

 
 if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

 if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is less than b\n");
  }

 if (a == 0 && b == 0)
  {
    printf("a and b are equal to 0\n");
  }
  else
  {
    printf("one or both of a and b is not equal to 0\n");
  }

 if (a == 0 || b == 0)
  {
    printf("a or b is equal to 0\n");
  }
  else
  {
    printf("neither a nor b is equal to 0\n");
  }

 if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  }
}

