// Product.h
#pragma once

#include <string>
using namespace::std;

class Product {
public:
	Product();
	~Product();
	void ProducePart(string part);
	void PrintProduct();
protected:
	
private:
	string _name = "";
};
