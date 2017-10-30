//Originator.h
#pragma once

#include <string>
using namespace::std;

class Memento;

class Originator {
public:
	typedef string State;
	Originator();
	Originator(const State& sdt);
	~Originator();
	Memento* CreateMemento();
	void SetMemmento(Memento* men);
	void RestoreToMemento(Memento* mt);
	State GetState();
	void SetState(const State& sdt);
	void PrintState();
protected:
private:
	State _sdt;
	Memento* _mt;
};
