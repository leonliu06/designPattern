#include "Builder.h"
#include "Product.h"

#include <iostream>

using namespace::std;

Builder::Builder() {}
Builder::~Builder() {}
ConcreteBuilder::ConcreteBuilder() {
	_product = new Product();
}
ConcreteBuilder::~ConcreteBuilder() {}

void ConcreteBuilder::BuildPartA(const string& buildPara) {
	cout << "Step1: Build PartA..." << buildPara << endl;
	_product->ProducePart(buildPara);	
}

void ConcreteBuilder::BuildPartB(const string& buildPara) {
	cout << "Step2: Build PartB..." << buildPara << endl;
	_product->ProducePart(buildPara);
}

void ConcreteBuilder::BuildPartC(const string& buildPara) {
	cout << "Step3: Build PartC..." << buildPara << endl;
	_product->ProducePart(buildPara);
}

Product* ConcreteBuilder::GetProduct() {
	return _product;
}