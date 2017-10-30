//Memento.h
#pragma once
#include <string>
using namespace::std;

typedef string State;

class Memento {
public:
	~Memento();
private:
	//这是最关键的地方，将 Originator 声明为 friend 类，可以访问内部信息，但是其他类不能访问
	friend class Originator;
	Memento();
	Memento(const State& sdt);	
	void SetState(const State& sdt);
	State GetState();
private:
	State _sdt;
};
