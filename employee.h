#include <stdio.h>
#include <stddef.h>

//./employeeProgram.exe
//gcc employeeMain.o employeeTable.o employeeOne.o -o employeeProgram
//gcc -c employeeMain.c employeeTable.c employeeOne.c

typedef struct 
{
	long number; 
	char *name; 
	char *phone; 
	double salary; 
}
Employee, *PtrToEmployee;

typedef const Employee *PtrToConstEmployee;  