#include <iostream>
#include "list.h"
using namespace std;

class ArrayList : public List 
{
	int array[5];
	
	
	public:
		int count = 0;
		
		void add(int num)
		{
			cout << "Trying to add " << num << endl;
			if (count < 5)
			{
				array[count] = num;
				count++;
			} else
			{
				cout << "Memory Exception" << endl;
			}
		}
		
		void print()
		{
			cout << "Size: " << count << endl;
			
			for (int i = 0; i < count; i++)
			{
				if (i == 0)
				{
					cout << array[i];
				} else
				{
					cout << ", " << array[i];
				}
			}
			
			cout << endl;
		}
};
