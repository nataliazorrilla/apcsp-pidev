#include <stdio.h>


int arrayadd(int size, int (*arr)[size], int n);

int main()
{
  int arr[100];
  
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
  }

 	for (int i = 0; i < 100; i++)
	{
	 printf("%d\n", arr[i]);
	}
	
	int (*ptrtoarr)[100] = &arr;

	printf("By what number are you incrementing this array?\n");
	int a;
	scanf("%d", &a);
	
	arrayadd (100, ptrtoarr, a);
	
	for (int i = 0; i < 100; i++)
	{
		printf("%d\n", (*ptrtoarr)[i]);
	}
}

int arrayadd(int size, int (*arr)[size], int n)
{
	for (int i = 0; i < size; i++)
	{
		(*arr)[i] = (*arr)[i] + n;
	}
}
