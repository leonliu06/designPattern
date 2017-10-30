//Colleague.h
#pragma once

#include <string>
using namespace::std;

class Mediator;

class Colleague {
public:
	virtual ~Colleague();
	virtual void Action() = 0;
	virtual void SetState(const string& sdt) = 0;
	virtual string GetState() = 0;
protected:
	Colleague();
	Colleague(Mediator* mdt);
	Mediator* _mdt;
private:
};

class ConcreteColleagueA : public Colleague {
public:
	ConcreteColleagueA();
	ConcreteColleagueA(Mediator* mdt);
	~ConcreteColleagueA();
	void Action();
	void SetState(const string& sdt);
	string GetState();
protected:
private:
	string _sdt;
};

class ConcreteColleagueB : public Colleague {
public:
	ConcreteColleagueB();
	ConcreteColleagueB(Mediator* mdt);
	~ConcreteColleagueB();
	void Action();
	void SetState(const string& sdt);
	string GetState();
protected:
private:
	string _sdt;
};

