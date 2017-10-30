//Memento.h
#pragma once
#include <string>
using namespace::std;

typedef string State;

class Memento {
public:
	~Memento();
private:
	//������ؼ��ĵط����� Originator ����Ϊ friend �࣬���Է����ڲ���Ϣ�����������಻�ܷ���
	friend class Originator;
	Memento();
	Memento(const State& sdt);	
	void SetState(const State& sdt);
	State GetState();
private:
	State _sdt;
};
