#include "Prototype.h"

#include <iostream>

using namespace::std;

int main(int argc, char* argv[]) {
	Prototype* p = new ConcretePrototype();
	Prototype* pl = p->Clone();
	return 0;
}