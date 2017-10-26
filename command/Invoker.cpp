//Invoker.cpp
#include "Invoker.h"
#include "Command.h"

Invoker::Invoker(Command * cmd){
	this->_cmd = cmd;
}

Invoker::~Invoker(){
	delete _cmd;
}

void Invoker::Invoke()
{
	this->_cmd->Excute();
}

