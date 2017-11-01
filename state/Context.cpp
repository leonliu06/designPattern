//Context.cpp
#include "Context.h"
#include "State.h"

#include <iostream>
using namespace::std;

Context::Context(State* state) {
	this->_state = state;
}
Context::~Context() {
	delete _state;
}
void Context::OperationInterface() {
	_state->OperationInterface(this);
}
bool Context::ChangeState(State* state) {
	this->_state = state;
	return true;
}
void Context::OperationChangeState() {
	_state->OperationChangeState(this);
}