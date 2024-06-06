#include "Course.h"

void Course::setCourseID(string cid)
{
	courseID = cid;
}

string Course::getCourseID()
{
	return courseID;
}

void Course::setName(string n)
{
	name = n;
}

string Course::getName()
{
	return name;
}

Course::Course():Course("not set yet","Not set yet")
{
}

Course::Course(string cid, string n)
{
	setCourseID(cid);
	setName(n);
}
