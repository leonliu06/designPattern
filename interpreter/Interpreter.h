//Interpreter.h
#pragma once

#include "Context.h"
#include <string>

using namespace::std;

class AbstractExpression {
public:
	virtual ~AbstractExpression();
	virtual void Interprete(const Context& c);
protected:
	AbstractExpression();
private:
};

class TerminalExpression : public AbstractExpression {
public:
	TerminalExpression(const string& statement);
	~TerminalExpression();
	void Interprete(const Context& c);
protected:
private:
	string _statement;
};

class NonterminalExpression : public AbstractExpression {
public:
	NonterminalExpression(AbstractExpression* expression, int times);
	~NonterminalExpression();
	void Interprete(const Context& c);
protected:
private:
	AbstractExpression* _expression;
	int _times;
};
