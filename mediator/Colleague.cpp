//Colleague.cpp

#include "Colleague.h"
#include "Mediator.h"

#include <iostream>
using namespace ::std;

Colleague::Colleague() {}
Colleague::Colleague(Mediator* mdt) {
	this->_mdt = mdt;
}
Colleague::~Colleague() {}

ConcreteColleagueA::ConcreteColleagueA() {}
ConcreteColleagueA::ConcreteColleagueA(Mediator* mdt) : Colleague(mdt) {}
ConcreteColleagueA::~ConcreteColleagueA() {}

void ConcreteColleagueA::Action(){
	_mdt->DoActionFromAtoB();
	cout << "State of ConcreteColleagueB: " << this->GetState() << endl;
}

void ConcreteColleagueA::SetState(const string& sdt) {
	_sdt = sdt;
}
string ConcreteColleagueA::GetState() {
	return _sdt;
}

ConcreteColleagueB::ConcreteColleagueB(){}

ConcreteColleagueB::ConcreteColleagueB(Mediator * mdt) : Colleague(mdt){}

ConcreteColleagueB::~ConcreteColleagueB(){}

void ConcreteColleagueB::Action(){
	_mdt->DoActionFromBtoA();
	cout << "State of ConcreteColleagueB: " << this->GetState() << endl;
}

void ConcreteColleagueB::SetState(const string & sdt){
	this->_sdt = sdt;
}

string ConcreteColleagueB::GetState(){
	return _sdt;
}
