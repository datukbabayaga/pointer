// ConsoleApplication29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	double temp[60], sum = 0.0, *ptr;
	int num, day = 0;
	ptr = temp;

	do
	{
		cout << "Enter temperature for day " << ++day;
		cout << " (0 to terminate: ) ";
		cin >> *ptr;
	} while ((*ptr++) > 0);

	ptr = temp;
	num = day - 1;
	for (day = 0; day < num; day++)
		sum += *(ptr++);
	cout << "\nAverage = " << sum / num;
}