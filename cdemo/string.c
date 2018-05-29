#include <stdio.h>
#include <string.h>



int main()
{
  char* conststr = "abcdefghijklmnopqrstuvwxyz";
  
  printf("conststr : %s\n", conststr);

  char arrstr[27];
	char alpha = 'a';
	for (int i = 0; i < 26; i++)
	{
		arrstr[i] = alpha;
		alpha++;
	}
	arrstr[26] = '\0';
		
  printf("arrstr : %s\n", arrstr);

  if (strcmp(conststr, arrstr) == 0)
	printf("The strings are identical!\n");
	else
		printf("The strings are different :(\n");

for (int i = 0; i < 26; i++)
        {
                arrstr[i] = arrstr[i] - 32;
        }

  printf("new arrstr : %s\n", arrstr);
  
if (strcmp(conststr, arrstr) == 0)
        printf("The strings are identical!\n");
        else
                printf("The strings are different :(\n");

char combstr[54];
strcpy(combstr, conststr);
strcat(combstr, arrstr);

  printf("conststr : %s\n", conststr);
  printf("arrstr : %s\n", arrstr);
  printf("combstr : %s\n", combstr);
}
