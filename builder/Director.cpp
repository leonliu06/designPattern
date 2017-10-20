#include "Director.h"
#include "Builder.h"

Director::Director(Builder* bld){
	_bld = bld;
}
Director::~Director() {}
void Director::Construct(string a, string b, string c) {
	_bld->BuildPartA(a);
	_bld->BuildPartB(b);
	_bld->BuildPartC(c);
}
