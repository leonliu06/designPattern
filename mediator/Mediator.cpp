//Mediator.cpp
#include "Mediator.h"
#include "Colleague.h"

Mediator::Mediator() {}
Mediator::~Mediator(){}

ConcreteMediator::ConcreteMediator() {}
ConcreteMediator::ConcreteMediator(Colleague* clgA, Colleague* clgB){
	this->_clgA = clgA;
	this->_clgB = clgB;
}
ConcreteMediator::~ConcreteMediator() {}

void ConcreteMediator::SetConcreteColleageA(Colleague * clgA){
	this->_clgA = clgA;
}

void ConcreteMediator::SetConcreteColleageB(Colleague * clgB){
	this->_clgB = clgB;
}

Colleague * ConcreteMediator::GetConcreteColleagueA(){
	return _clgA;
}

Colleague * ConcreteMediator::GetConcreteColleagueB(){
	return _clgB;
}

void ConcreteMediator::IntroColleague(Colleague * clgA, Colleague * clgB){
	this->_clgA = clgA;
	this->_clgB = clgB;
}

void ConcreteMediator::DoActionFromAtoB() {
	_clgB->SetState(_clgA->GetState());
}
void ConcreteMediator::DoActionFromBtoA() {
	_clgA->SetState(_clgB->GetState());
}
