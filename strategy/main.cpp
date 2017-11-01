//main.cpp

#include "Context.h"
#include "Strategy.h"
#include <iostream>
using namespace::std;

int main(int argc, char* argv[]) {
	Strategy* stg = new ConcreteStrategyA();
	Context* con = new Context(stg);
	con->DoAction();
	if (NULL != con)
		delete con;
	return 0;
}