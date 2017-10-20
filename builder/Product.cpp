#include "Product.h"

#include <iostream>

using namespace::std;

Product::Product() {}
Product::~Product() {}

void Product::ProducePart(int i, string* part){
	//_name[i] = (char*)malloc(10);
	cout << part;
	_name[i] = part;
}

void Product::PrintProduct() {
	cout << "The builded product is ";
	for (int i = 0; i < 3; i++) {
		cout << _name[i];
	}
	cout << endl;
}

ProductPart::ProductPart() {}
ProductPart::~ProductPart(){}
void ProductPart::BuildPart(string a) { 
	_part += a;
}