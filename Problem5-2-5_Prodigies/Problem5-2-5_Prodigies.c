// Problem5-2-5_Prodigies.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning( disable : 4996 )

struct Student
{
	char sname[20];
	size_t sage;
};

typedef struct Student Student;


int main()
{
	size_t length;
	scanf("%zu", &length);
	getchar();
	Student student;
	size_t count = 0;
	for (size_t i = 0; i < length; i++)
	{
		printf("Enter student name: ");
		gets_s(student.sname, 20);
		printf("Enter student age: ");
		scanf("%zu", &student.sage);
		getchar();
		if (student.sage >= 0 && student.sage < 10)
		{
			count++;
		}
	}
	printf("%zu", count);
    return 0;
}

