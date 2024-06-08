// StudentCoursesExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
int main()
{
	Student student1(5, "James", "1234");

	//cout<<student1.getCourse(0).getName();


	Student* csc2110 = new Student[13];


	for (int i = 0; i < 13; i++) // loop through all csc2110 array
	{
		
		for (int j=0; j < 10; j++)// loop through all the courses for each student
		{
			cout << csc2110[i].getCourse(j).getName() << endl;

		}

		cout << "===========\n";


	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
