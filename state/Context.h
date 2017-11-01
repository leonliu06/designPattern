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
	friend class State;	// 表明在 State 类中可以访问 Context 类的 private 字段
	bool ChangeState(State* state);
private:
	State* _state;
};
