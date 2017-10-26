//Handle.cpp
#include "Handle.h"
#include <iostream>
using namespace::std;

Handle::Handle() {
	_succ = 0;
}
Handle::Handle(Handle* succ) {
	_succ = succ;
}
Handle::~Handle() {
	delete _succ;
}
void Handle::SetSuccessor(Handle* succ) {
	_succ = succ;
}
void Handle::HandleRequest() {}
Handle* Handle::GetSuccessor(){
	return _succ;
}

ConcreteHandleA::ConcreteHandleA() {}
ConcreteHandleA::ConcreteHandleA(Handle* succ) : Handle(succ){}
ConcreteHandleA::~ConcreteHandleA() {}

void ConcreteHandleA::HandleRequest() {
	if (this->GetSuccessor() != 0) {
		cout << "ConcreteHandleA �ҰѴ���Ȩ����̽ڵ�......" << endl;
		this->GetSuccessor()->HandleRequest();
	}
	else {
		cout << "ConcreteHandleA û�к�̽ڵ��ˣ��ұ����Լ�����......" << endl;
	}
}

ConcreteHandleB::ConcreteHandleB() {}
ConcreteHandleB::ConcreteHandleB(Handle* succ) : Handle(succ) {}
ConcreteHandleB::~ConcreteHandleB() {}
void ConcreteHandleB::HandleRequest() {
	if (this->GetSuccessor() != 0) {
		cout << "ConcreteHandleB �ҰѴ���Ȩ����̽ڵ�......" << endl;
		this->GetSuccessor()->HandleRequest();
	}
	else {
		cout << "ConcreteHandleB û�к���ˣ��ұ����Լ�����......" << endl;
	}
}
