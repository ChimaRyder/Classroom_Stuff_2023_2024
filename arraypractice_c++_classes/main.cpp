#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
	
	ArrayList* list = new ArrayList();
	list->add(13);
	list->print();
	list->add(7);
	list->print();
	list->add(4);
	list->print();
	list->add(13);
	list->print();
	list->add(7);
	list->print();
	return 0;
}
