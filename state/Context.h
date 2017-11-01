//Context.h
#pragma once

class State;

class Context {
public:
	Context();
	Context(State* state);
	~Context();
	void OperationInterface();
	void OperationChangeState();
protected:
	friend class State;	// ������ State ���п��Է��� Context ��� private �ֶ�
	bool ChangeState(State* state);
private:
	State* _state;
};
