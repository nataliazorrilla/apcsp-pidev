#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{
	char input[256];
	printf("Would you like to add a new student? Respond with 1 for yes or 0 for no.\n");
	fgets(input, 256, stdin);
	int yn = 2;
	sscanf(input, "%d", &yn);
	struct Student mystudent[10];
	int studentnum = 0;
		while (yn ==  1)
		{
				for (int i = studentnum; i < studentnum + 1; i++)
				{

					printf("Student first name:\n");
					fgets(input, 256, stdin);
					char a[50];
					sscanf(input, "%s", a);
					strcpy(mystudent[i].firstnm, a);
					
					printf("Student last name:\n");
                                        fgets(input, 256, stdin);
					char b[50];
                                        sscanf(input, "%s", b);
					strcpy(mystudent[i].lastnm, b);
					
					printf("Student age:\n");
                                        fgets(input, 256, stdin);
					int c;
                                        sscanf(input, "%d", &c);
					mystudent[i].age = c;

                                        printf("Student ID:\n");
                                        fgets(input, 256, stdin);
					int d;
                                        sscanf(input, "%d", &d);
					mystudent[i].studentid = d;
				}
			studentnum++;
			printf("Add another student? 1=yes 0=no\n");
			fgets(input, 256, stdin);
			sscanf(input, "%d", &yn);
		}
	printf("Okay, here's the student list...\n");
	for (int i = 0; i < studentnum; i++)
	{
		printStudent(&mystudent[i]);
	}

}
