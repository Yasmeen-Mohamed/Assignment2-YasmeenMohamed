#include "Customer.h"

Customer::Customer()
{
	name = "";
	id = 0;
	age = 0;
	mechanicID = 0;
}

Customer::Customer(string n, int i, int a, int m_ID)
{
	name = n;
	id = i;
	age = a;
	mechanicID = m_ID;
}

void Customer::setMechanicID(int m_ID)
{
	mechanicID = m_ID;
}

void Customer::setAppointment(int h, int m)
{
	appointment.hours = h;
	appointment.mins = m;
}

int Customer::getMechanicID()
{
	return mechanicID;
}

Customer::Appointment Customer::getAppointment()
{
	return appointment;
}

bool Customer::operator > (Customer a)
{
	if (getAppointment().hours > a.getAppointment().hours)
		return true;
	if ((getAppointment().hours == a.getAppointment().hours) && (getAppointment().mins > a.getAppointment().mins))
		return true;
	else
		return false;
}

bool Customer::operator < (Customer a)
{
	{
		if (getAppointment().hours < a.getAppointment().hours)
			return true;
		if ((getAppointment().hours == a.getAppointment().hours) && (getAppointment().mins < a.getAppointment().mins))
			return true;
		else
			return false;
	}
}

bool Customer::operator == (Customer a)
{
	if ((getAppointment().hours == a.getAppointment().hours) && (getAppointment().mins == a.getAppointment().mins))
		return true;
	else
		return false;
}