#include <iostream>
#include <string>
#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"
using namespace std;

int main()
{
	Queue <Mechanic> mechQ(3);
	Queue <Customer> custOrdered(4);

	string c1Name, c2Name, c3Name, c4Name;
	string app1, app2, app3, app4;
	int app1_h, app1_m, app2_h, app2_m, app3_h, app3_m, app4_h, app4_m;

	cout << "Enter customer 1 name: ";
	cin >> c1Name;
	cout << "Appointment time (HH:MM): ";
	cin >> app1;
	cout << "Enter customer 2 name: ";
	cin >> c2Name;
	cout << "Appointment time (HH:MM): ";
	cin >> app2;
	cout << "Enter customer 3 name: ";
	cin >> c3Name;
	cout << "Appointment time (HH:MM): ";
	cin >> app3;
	cout << "Enter customer 4 name: ";
	cin >> c4Name;
	cout << "Appointment time (HH:MM): ";
	cin >> app4;

	Mechanic m1, m2, m3;
	m1.setName("Ayman");
	m2.setName("Khaled");
	m3.setName("Mai");

	Customer c1, c2, c3, c4, current;
	c1.setName(c1Name);
	c2.setName(c2Name);
	c3.setName(c3Name);
	c4.setName(c4Name);

	app1_h = stoi(app1.substr(0, 2));  
	app1_m = stoi(app1.substr(app1.find(":") + 1));
	app2_h = stoi(app2.substr(0, 2));
	app2_m = stoi(app2.substr(app1.find(":") + 1));
	app3_h = stoi(app3.substr(0, 2));
	app3_m = stoi(app3.substr(app1.find(":") + 1));
	app4_h = stoi(app4.substr(0, 2));
	app4_m = stoi(app4.substr(app1.find(":") + 1));

	c1.setAppointment(app1_h, app1_m);
	c2.setAppointment(app2_h, app2_m);
	c3.setAppointment(app3_h, app3_m);
	c4.setAppointment(app4_h, app4_m);

	Customer c[] = { c1, c2, c3, c4 };

	mechQ.push(m1);
	mechQ.push(m2);
	mechQ.push(m3);

	
	for (int i = 0; i < 4; i++)
	{
		Queue <Mechanic> temp = mechQ;
		bool flag = false;

		for (int j = 0; j < 3; j++)
		{
			if (temp.ffront().isAvailable(c[i].getAppointment()))
			{
				temp.ffront().setArray(c[i].getAppointment());
				cout << c[i].getName() << " should be assigned to " << temp.ffront().getName() << " at " << c[i].getAppointment().hours << ":" << c[i].getAppointment().mins;
				if (c[i].getAppointment().mins == 0)
					cout << '0';
				cout << endl;
				temp.pop();
				flag = true;
				break;
			}
		}
		if (flag == false)
			cout << "No mechanics available for " << c[i].getName() << endl;
	}


	cout << "After ordering: " << endl;
	for (int y = 0; y < 3; y++)
	{
		if (c1 > c2)
		{
			Customer temp = c1;
			c1 = c2;
			c2 = temp;
		}
		if (c2 > c3)
		{
			Customer temp = c2;
			c2 = c3;
			c3 = temp;
		}
		if (c3 > c4)
		{
			Customer temp = c3;
			c3 = c4;
			c4 = temp;
		}
	}
	custOrdered.push(c1);
	custOrdered.push(c2);
	custOrdered.push(c3);
	custOrdered.push(c4);

	for (int x = 0; x < 4; x++)
	{
		current = custOrdered.ffront();
		cout << current.getName() << " has an appointment at " << current.getAppointment().hours << ":" << current.getAppointment().mins;
		if (current.getAppointment().mins == 0)
			cout << '0';
		cout << " with " << mechQ.ffront().getName() << endl;
		custOrdered.pop();
	}

	return 0;
}





