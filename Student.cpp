#include "Student.h"

void Student::setStudentID(string sid)
{
	studentID = sid;
}

string Student::getStudentID()
{
	return studentID;
}

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

void Student::setCourse(int index, Course c)
{
}

Course Student::getCourse(int index)
{
	return Course();
}

Student::Student(int numberOfCourses, string n, string sid)
{
	setStudentID(sid);
	setName(n);

	studentCourses = new Course[numberOfCourses];
}

void Student::resetCourses(int numberOfCourses)
{
	delete[] studentCourses;
	studentCourses = new Course[numberOfCourses];
}

Student::~Student()
{
	delete[] studentCourses;
	// conn1.Close()
}
