// Facade.cpp
#include "Facade.h"
#include <iostream>
using namespace::std;

SubSystem1::SubSystem1() {}
SubSystem1::~SubSystem1() {}
void SubSystem1::Operation() {
	cout << "Subsystem1 operation..." << endl;
}

SubSystem2::SubSystem2() {}
SubSystem2::~SubSystem2() {}
void SubSystem2::Operation() {
	cout << "Subsystem2 operation..." << endl;
}

Facade::Facade() {
	this->_subs1 = new SubSystem1();
	this->_subs2 = new SubSystem2();
}

Facade::~Facade() {
	delete _subs1;
	delete _subs2;
}

void Facade::OperationWrapper() {
	this->_subs1->Operation();
	this->_subs2->Operation();
}