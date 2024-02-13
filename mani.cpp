#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string name,prn;
	int no=11;
	float a=1.23345656;
	
	
	cout<<"Enter Your Name"<<endl;
	cin>>name;
	
	cout<<"Enter Your PRN"<<endl;
	cin>>prn;
	
	
	cout << setw(20) << setfill('*') <<name << setw(20) << setfill('*') << prn << endl;
	cout << "Hex Value of 11 =" << " " << hex << no << endl; 
	cout << "oct Value of 11 =" << " " << oct << no << endl; 
	cout << "Precision Value of 1.23345656 = "<< setprecision(4) << a << endl;
	cout << "flag " << oct<< setiosflags(ios::showbase)<< no << endl;


	
	
	return 0;
}
