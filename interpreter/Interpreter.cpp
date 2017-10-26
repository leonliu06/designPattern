//Interpreter.cpp
#include "Interpreter.h"
#include <iostream>
using namespace::std;

AbstractExpression::AbstractExpression() {}
AbstractExpression::~AbstractExpression() {}
void AbstractExpression::Interprete(const Context& c) {}

TerminalExpression::TerminalExpression(const string& statement) {
	this->_statement = statement;
}
TerminalExpression::~TerminalExpression() {}
void TerminalExpression::Interprete(const Context& c) {
	cout << this->_statement << " TerminalExpression" << endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression* expression, int times) {
	this->_expression = expression;
	this->_times = times;
}
NonterminalExpression::~NonterminalExpression() {}
void NonterminalExpression::Interprete(const Context& c) {
	for (int i = 0; i < _times; i++) {
		this->_expression->Interprete(c);
	}
}
