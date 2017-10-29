//Originator.cpp
#include "Originator.h"
#include "Memento.h"

#include <iostream>
using namespace::std;

typedef string State;

Originator::Originator() {
	_sdt = "";
	_mt = 0;
}
Originator::Originator(const State& sdt) {
	_sdt = sdt;
	_mt = 0;
}
Originator::~Originator() {}

Memento* Originator::CreateMemento() {
	return new Memento(_sdt);
}

State Originator::GetState() {
	return _sdt;
}
void Originator::SetState(const State& sdt) {
	_sdt = sdt;
}
void Originator::PrintState() {
	cout << this->_sdt << "......" << endl;
}
void Originator::SetMemmento(Memento* men) {
	this->_mt = men;
}
void Originator::RestoreToMemento(Memento* mt) {
	this->_sdt = mt->GetState();
}