
#include <iostream>
using namespace std;

protected class Person {
	int id;
	char name[100];

public:
	void set_p()
	{
		cout << "Enter the Id:";
		cin >> id;
		cout << "Enter the Name:";
		cin >> name;
	}

	void display_p()
	{
		cout << endl <<"Id: "<< id << "\nName: " << name <<endl;
	}
};

class Student : protected  Person {
	char course[50];
	int fee;

public:
	void set_s()
	{
		set_p();
		cout << "Enter the Course Name:";
		cin >> course;
		cout << "Enter the Course Fee:";
		cin >> fee;
	}

	void display_person()
	{
		display_p();
		cout <<"Course: "<< course << "\nFee: " << fee << endl;
	}
};

int main()
{
	Student s;
	s.set_s();
	s.display_person();
	return 0;
}
