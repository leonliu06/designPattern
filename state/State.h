//State.h
#pragma once

class Context;

class State {
public:
	State();
	virtual ~State();
	virtual void OperationInterface(Context*) = 0;
	virtual void OperationChangeState(Context*) = 0;
	bool ChangeState(Context* con, State* st);
private:
};

class ConcreteStateA : public State {
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	virtual void OperationInterface(Context*);
	virtual void OperationChangeState(Context*);
protected:
private:
};

class ConcreteStateB : public State {
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	virtual void OperationInterface(Context*);
	virtual void OperationChangeState(Context*);
protected:
private:
};
