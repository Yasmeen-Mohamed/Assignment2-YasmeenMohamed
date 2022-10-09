#include <iostream>
#include <string>
#include "Person.h"
#include <vector>
using namespace std;

class Mechanic:public Person
{
private:
	int counter;
	vector <Appointment> arr;
public:
	Mechanic();
	~Mechanic();
	void setCounter(int n);
	void setArray(Appointment app);
	int getCounter();
	vector <Mechanic::Appointment> getArray();
	bool isAvailable(Appointment app);
};
