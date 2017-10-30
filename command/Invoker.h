//Invoker.h
#pragma once

class Command;

class Invoker {
public:
	Invoker(Command* cmd);
	~Invoker();
	void Invoke();
protected:
private:
	Command* _cmd;
};
