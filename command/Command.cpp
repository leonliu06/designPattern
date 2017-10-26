//Command.cpp
#include "Command.h"
#include "Receiver.h"

#include <iostream>

ConcreteCommand::ConcreteCommand(Receiver * rev){
	this->_rev = rev;
}

ConcreteCommand::~ConcreteCommand(){
	delete _rev;
}

void ConcreteCommand::Excute(){
	this->_rev->Action();
}

Command::~Command(){}

Command::Command(){}
