#pragma once
#include <string>
#include <iostream>
using namespace std;
class Course
{
private: 
	string courseID;
	string name;

public:
	void setCourseID(string cid);
	string getCourseID();

	void setName(string n);
	string getName();

	Course();
	Course(string cid, string n);
};

