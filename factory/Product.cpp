#include "Product.h"
#include "Factory.h"

#include <iostream>

using namespace std;

Product::Product() {

}

Product::~Product() {

}

ConcreteProduct::ConcreteProduct() {
	cout << "concrete product..." << endl;
}

ConcreteProduct::~ConcreteProduct() {

}