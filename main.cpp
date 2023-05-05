#include <iostream>
#include "log_elem.h"
#include "log_elem.cpp"
#include "log_not.h"
#include "log_not.cpp"
using namespace std;

int main() {
	cout << "Test v5.1: Ok.\n";
	
	LogNot a;
	a.setIn1(true);
	cout << "NOT: " << a.getRes() << endl;

    return 0;
}
