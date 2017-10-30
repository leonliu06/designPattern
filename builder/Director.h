#pragma once

#include <string>

using namespace::std;

class Builder;
class Director {
public:
	Director(Builder* bld);
	~Director();
	void Construct(string, string, string);
protected:
private:
	Builder* _bld;
};