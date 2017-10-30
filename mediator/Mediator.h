//Mediator.h
#pragma once

class Colleague;

class Mediator {
public:
	virtual ~Mediator();
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator();
private:
};

class ConcreteMediator : public Mediator {
public:
	ConcreteMediator();
	ConcreteMediator(Colleague* clgA, Colleague* clgB);
	~ConcreteMediator();
	void SetConcreteColleageA(Colleague* clgA);
	void SetConcreteColleageB(Colleague* clgB);
	Colleague* GetConcreteColleagueA();
	Colleague* GetConcreteColleagueB();
	void IntroColleague(Colleague* clgA, Colleague* clgB);
	void DoActionFromAtoB();
	void DoActionFromBtoA();
protected:
private:
	Colleague* _clgA;
	Colleague* _clgB;
};