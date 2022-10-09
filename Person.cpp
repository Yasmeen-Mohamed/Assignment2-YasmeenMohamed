#include "Person.h"

Person::Person()
{
	name = "";
	id = 0;
	age = 0;
}
void Person::setName(string n)
{
	name = n;
}
void Person::setID(int i)
{
	id = i;
}
void Person::setAge(int a)
{
	age = a;
}
string Person::getName()
{
	return name;
}
int Person::getID()
{
	return id;
}
int Person::getAge()
{
	return age;
}
void Person::print_info()
{
	cout << name << endl << id << endl << age << endl;
}
