//main.cpp
#include "Command.h"
#include "Invoker.h"
#include "Receiver.h"
#include <iostream>
using namespace::std;

int main(int argc, char* argv[]) {
	Receiver* rev = new Receiver();
	Command* cmd = new ConcreteCommand(rev);
	Invoker* inv = new Invoker(cmd);
	inv->Invoke();
	return 0;
}