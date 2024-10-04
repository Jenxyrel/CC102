#include <iostream>

using namespace std;

int main() 
{
	string name, course_year, school;
	
	
	cout << "-------------------------------------------------------------------------------------------------\n";
	cout << "Enter your Nicname\t\t:\t";
	cin >> name;
	
	cout << "Enter your Course-Year Level\t:\t";
	cin >> course_year;
	
	cout << "Enter your School\t\t:\t";
	cin >> school;
	cout << "-------------------------------------------------------------------------------------------------\n";
	cout << "Wow Congrats " << name << "! " << course_year << " is a nice course. And you are studying in " << school << ", \n";
	cout << "which is one of the Center of Excellence in Tertiary Education\n";
	cout << "-------------------------------------------------------------------------------------------------\n";
	
	return 0;
}	