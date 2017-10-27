//main.cpp
#include "Mediator.h"
#include "Colleague.h"

#include <iostream>
using namespace::std;

int main(int argc, char* argv[]) {
	ConcreteMediator* m = new ConcreteMediator();
	ConcreteColleagueA* c1 = new ConcreteColleagueA(m);
	ConcreteColleagueB* c2 = new ConcreteColleagueB(m);

	m->IntroColleague(c1, c2);

	c1->SetState("old");
	c2->SetState("old");
	c1->Action();
	c2->Action();
	cout << endl;

	c1->SetState("new");
	c1->Action();
	c2->Action();
	cout << endl;

	c2->SetState("old");
	c2->Action();
	c1->Action();

	return 0;


}