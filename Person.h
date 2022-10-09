#include <iostream>
#include <string>
using namespace std;

#ifndef _PERSON_H
#define _PERSON_H
class Person
{
protected:
	string name;
	int id;
	int age;
	struct Appointment
	{
		int hours;
		int mins;
	};
public:
	Person();
	void setName(string n);
	void setID(int i);
	void setAge(int a);
	string getName();
	int getID();
	int getAge();
    void print_info();
};
#endif

