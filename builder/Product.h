#pragma once

#include <string>
using namespace::std;

class Product {
public:
	Product();
	~Product();
	void ProducePart(int i, string* part);
	void PrintProduct();
protected:
	
private:
	string* _name = new string[3];
};

class ProductPart {
public:
	ProductPart();
	~ProductPart();
	void BuildPart(string part);
protected:
private:
	string _part;
};