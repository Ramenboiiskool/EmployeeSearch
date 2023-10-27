#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber)
{
	const PtrToConstEmployee endPtr = ptr + tableSize; 
	for(; ptr < endPtr; ptr++)
	{
		if(ptr->number == targetNumber)
		{
			return (PtrToEmployee) ptr; 
		}
		return NULL; 
	}
}

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName)
{
	const PtrToConstEmployee endPtr = ptr + tableSize; 
	for(; ptr < endPtr; ptr++)
	{
		if(strcmp(ptr->name, targetName) == 0)
		{
			return (PtrToEmployee) ptr;
		}
		return NULL; 
	}		
}

PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char *targetPhone)
{
	const PtrToConstEmployee endPtr = ptr + tableSize; 
	for(; ptr < endPtr; ptr++)
	{
		if(strcmp(ptr->phone, targetPhone) == 0)
		{
			return (PtrToEmployee) ptr; 
		}
		return NULL; 
	}
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSal)
{
	const PtrToConstEmployee endPtr = ptr + tableSize; 
	for(; ptr < endPtr; ptr++)
	{
		if(ptr->salary == targetSal)
		{
			return (PtrToEmployee) ptr; 
		}
		else
		{
			return NULL;
		} 
	}
}