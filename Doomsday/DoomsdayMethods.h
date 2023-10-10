#include "methods.h"
//#include <cmath.h>
using namespace std;

class DoomsdayMethods : public Methods {
	
	int day;
	int month;
	int year;
	
	int countCentury() {
		int indentifier = year/100;
		
		switch (indentifier%4)
		{
			case 0:
				return 2;
				break;
			case 1:
				return 0;
				break;
			case 2:
				return 5;
				break;
			case 3:
				return 3;
				break;		
		}
	}
	
	int countMonths()
	{
		int identifier = year%100;
		
		return identifier/12;
	}
	
	int countRemainder()
	{
		int identifier = year%100;
		
		return identifier%12;
	}
	
	int countLeap()
	{
		return countRemainder()/4;
	}
	
	int diffFromDoomsday()
	{
		switch (month)
		{
			case 1:
				if (year%4 == 0)
				{
					return abs(day-4);
					break;
				} else
				{
					return abs(day-3);
					break;
				}
			case 2:
				if (year%4 == 0)
				{
					return abs(day-29);
					break;
				} else
				{
					return abs(day-28);
					break;
				}
			case 3:
				return abs(day-14);
				break;
			case 4:
				return abs(day-4);
				break;
			case 5:
				return abs(day-9);
				break;
			case 6:
				return abs(day-6);
				break;
			case 7:
				return abs(day-11);
				break;
			case 8:
				return abs(day-8);
				break;
			case 9:
				return abs(day-5);
				break;
			case 10:
				return abs(day-10);
				break;
			case 11:
				return abs(day-7);
				break;
			case 12:
				return abs(day-12);
				break;
		}
	}
	
	int calculate() {
		int total = 0;
		
		total += countCentury();
		total += countMonths();
		total += countRemainder();
		total += countLeap();
		total += diffFromDoomsday();
		
		while (total >= 7)
		{
			total -= 7;
		}
		
		return total;
	}
	
	
	public:
	
	DoomsdayMethods(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	
	bool verifyDate ()
	{
		if (year > 0)
		{
			if (month <= 12 && month > 0)
			{
				if (day == 31)
				{
					//cout << "1";
					if ((month <= 7 && month%2 != 0) || (month > 7 && month%2 == 0 && month != 2))
					{
						return true;
					}
				}
				
				if (day == 30)
				{
					//cout << "2";
					if (month != 2)
					{
						return true;
					}
				}
				
				if (month == 2 && day == 29)
				{
					//cout << "3";
					if (year%4 == 0)
					{
						return true;
					}
				} 
				
				if (day < 29 && day > 0)
				{
					//cout << "4";
					return true;
				}
			}
		}
	
		return false;
	}
	
	string getDay() {
		
		int weekday = calculate();
		//cout << weekday;
		
		switch (weekday)
		{
			case 0:
				return "Sunday";
				break;
			case 1:
				return "Monday";
				break;
			case 2:
				return "Tuesday";
				break;
			case 3:
				return "Wednesday";
				break;
			case 4:
				return "Thursday";
				break;
			case 5:
				return "Friday";
				break;
			case 6:
				return "Saturday";
				break;
		}
	}
	
};