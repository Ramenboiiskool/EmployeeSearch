#include <string.h>
#include <stdlib.h>
#include "employee.h"

Employee EmployeeTable[] = 
{
	{1001, "Daph B", "909-555-2134", 8.78}, 
	{1011, "Tam F", "213-555-1212", 4.50}, 
	{1140, "Dorris P", "310-555-1215", 7.80}, 
	{5045, "Tony B", "714-555-2749", 8.32},
	{4011, "Brian H", "909-555-1212", 6.34}
};
const int EmployeeTableEntries = sizeof(EmployeeTable)/sizeof(EmployeeTable[0]); 