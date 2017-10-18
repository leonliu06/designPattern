#include "AbstractFactory.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	AbstracFactory* f1 = new ConcreteFactory1();
	f1->CreateProductA();
	f1->CreateProductB();

	AbstracFactory* f2 = new ConcreteFactory2();
	f2->CreateProductA();
	f2->CreateProductB();

	return 0;
}