#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Customer :public Person
{
private:
	int mechanicID;
	Appointment appointment;
public:
	Customer();
	Customer(string n, int i, int a, int mID);
	void setMechanicID(int m_ID);
	void setAppointment(int h, int m);
	int getMechanicID();
	Appointment getAppointment();
	bool operator > (Customer a);
	bool operator < (Customer a);
	bool operator == (Customer a);
};
