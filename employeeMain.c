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

	//contain true
	matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 5045); 
	if(matchPtr != NULL)
	{
		printf("Employee ID 5045 is in record %d\n", matchPtr - EmployeeTable); 
	}
	else 
	{
		printf("Employee ID 5045 is NOT found in the record\n"); 
	}
	//contain false
	matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 5555); 
	if(matchPtr != NULL)
	{
		printf("Employee ID 5555 is in record %d\n", matchPtr - EmployeeTable); 
	}
	else 
	{
		printf("Employee ID 5555 is NOT found in the record\n"); 
	}
	
	//contain true
	matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony B"); 
	if(matchPtr != NULL)
	{
		printf("Employee Tony B is in record %d\n", matchPtr - EmployeeTable);
	}
	else 
	{
		printf("Employee Tony B is NOT found in the record\n"); 
	}
	//contain false
	matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony C"); 
	if(matchPtr != NULL)
	{
		printf("Employee Tony C is in record %d\n", matchPtr - EmployeeTable);
	}
	else 
	{
		printf("Employee Tony C is NOT found in the record\n"); 
	}

	//contain false
	matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "714-555-5555"); 
	if(matchPtr != NULL)
	{
		printf("Employee Phone Number 714-555-5555 is in record %d\n", matchPtr - EmployeeTable);
	}
	else 
	{
		printf("Employee Phone Number 714-555-5555 is NOT found in the record\n"); 
	}
	//contain true
	matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "714-555-2749"); 
	if(matchPtr != NULL)
	{
		printf("Employee Phone Number 714-555-2749 is in record %d\n", matchPtr - EmployeeTable);
	}
	else 
	{
		printf("Employee Phone Number 714-555-2749 is NOT found in the record\n"); 
	}

	//contain true 
	matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32); 
	if(matchPtr != NULL)
	{
		printf("Employee salary 8.32 is in record %d\n", matchPtr - EmployeeTable); 
	}
	else 
	{
		printf("Employee salary 8.32 is NOT found in the record\n"); 
	}
	//contains false
	matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 5.55); 
	if(matchPtr != NULL)
	{
		printf("Employee salary 5.55 is in record %d\n", matchPtr - EmployeeTable); 
	}
	else 
	{
		printf("Employee salary 5.55 is NOT found in the record\n"); 
	}

	return EXIT_SUCCESS; 
}