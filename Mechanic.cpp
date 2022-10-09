#include "Mechanic.h"

Mechanic::Mechanic()
{

}


Mechanic::~Mechanic()
{
	
}

void Mechanic::setCounter(int n)
{
	counter = n;
}

void Mechanic::setArray(Appointment app)
{
	arr.push_back(app);
}

int Mechanic::getCounter()
{
	return counter;
}
vector <Mechanic::Appointment> Mechanic::getArray()
{
	return arr;
}

bool Mechanic::isAvailable(Appointment app)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if ((arr[i].hours == app.hours) && (arr[i].mins == app.mins))
			return false;
	}
	counter++;
	return true;
}