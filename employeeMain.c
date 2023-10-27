#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void)
{
	PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
	PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
	PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
	PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind); 

	extern Employee EmployeeTable[];
	extern const int EmployeeTableEntries; 

	PtrToEmployee matchPtr; 

	matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 5045); 
	if(matchPtr != NULL)
	{
		printf("Employee ID 5045 is in record %d\n", matchPtr - EmployeeTable); 
	}
	else 
	{
		printf("Employee ID 5045 is NOT found in the record\n"); 
	}
	
	matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony B"); 
	if(matchPtr != NULL)
	{
		printf("Employee Tony B is in record %d\n", matchPtr - EmployeeTable);
	}
	else 
	{
		printf("Employee Tony B is NOT found in the record\n"); 
	}
	
	matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "714-555-2749"); 
	if(matchPtr != NULL)
	{
		printf("Employee Phone Number 714-555-2749 is in record %d\n", matchPtr - EmployeeTable);
	}
	else 
	{
		printf("Employee Phone Number 714-555-2749 is NOT found in the record\n"); 
	}

	matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32); 
	if(matchPtr != NULL)
	{
		printf("Employee salary 8.32 is in record %d\n", matchPtr - EmployeeTable); 
	}
	else 
	{
		printf("Employee salary 8.32 is NOT found in the record\n"); 
	}

	return EXIT_SUCCESS; 
}