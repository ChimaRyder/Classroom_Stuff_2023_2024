#include <iostream>
#include "DoomsdayMethods.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	cout << "DOOMSDAY RULE FINDER: Find out what day of the week a date is!" << endl;
	cout << "--------------------------------------------------------------" << endl;


	int day, month, year;
	char temp;
	cout << "What day would you like to calculate?" << endl;
	cout << "Day (dd):	";
	cin >> day;
	cout << "Month (mm):	";
	cin >> month;
	cout << "Year (yyyy):	";
	cin >> year;
	
	DoomsdayMethods* dm = new DoomsdayMethods(day, month, year);
	
	if (dm->verifyDate())
	{
		cout << "Date Verified: " << month << "/" << day << "/" << year << endl;
		cout << "Type X to continue...";
		cin >> temp;
		system("cls");
	} else {
		system("cls");
		cout << "ERROR: Date not valid. Exiting...";
		return 0;
	}
	
	cout << month << "/" << day << "/" << year << " is a " << dm->getDay();
	
	return 0;
}