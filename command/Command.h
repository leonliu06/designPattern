//Command.h
#pragma once
class Receiver;

class Command {
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
private:
};

class ConcreteCommand : public Command {
public:
	ConcreteCommand(Receiver* rev);
	~ConcreteCommand();
	void Excute();
protected:
private:
	Receiver* _rev;
};
