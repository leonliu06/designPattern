//Strategy.cpp
#include "Strategy.h"
#include <iostream>
using namespace::std;

Strategy::Strategy() {}
Strategy::~Strategy() {
	cout << "~Strategy......" << endl;
}
void Strategy::AlgrithmInterface(){}