#include "Product.h"

#include <iostream>

using namespace::std;

Product::Product() {}
Product::~Product() {}

void Product::ProducePart(string part){
	cout << part;
	_name += part;
}

void Product::PrintProduct() {
	cout << "The builded product is: \n" << _name << endl;
}
