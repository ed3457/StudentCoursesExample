#pragma once
#include "Course.h"
class Student
{
private:
	string studentID;
	string name;

	Course* studentCourses;

public:
	void setStudentID(string sid);
	string getStudentID();

	void setName(string n);
	string getName();

	void setCourse(int index, Course c);

	Course getCourse(int index);

	Student(int numberOfCourses, string n, string sid);

	Student();

	void resetCourses(int numberOfCourses);

	~Student();// Destructor: function that is called when the object becomes
	// out of scope. This function can be used to conduct resource cleanups


};

