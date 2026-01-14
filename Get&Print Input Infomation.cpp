#include<iostream>
#include<string>

using namespace std;

struct info {
	string name = "unknown";
	char grade = 'D';
	int age = 0;
};

int main() {
	info* i = new info();
	cout << "What is your first name ? ";
	string firstName;
	getline(cin,firstName);
	cout << "What is your last name ? ";
	string lastName;
	getline(cin, lastName);
	cout << "What letter grade do you deserve ? ";
	char g;
	cin >> g;
	cout << "What is your age ? ";
	int a;
	cin >> a;
	string n = lastName + " ¡¤ " + firstName;
	i->name = n;
	i->grade = g;
	i->age = a;
	cout << "Name : " << i->name << endl;
	cout << "Grade : " << i->grade << endl;
	cout << "Age : " << i->age << endl;
	delete i;
}