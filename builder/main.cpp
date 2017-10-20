#include "Builder.h"
#include "Product.h"
#include "Director.h"
#include <iostream>

using namespace::std;

int main(int argc, char* argv[]) {
	Builder* b = new ConcreteBuilder();
	Director* d = new Director(b);
	string userProductA = "parta";
	string userProductB = "partb";
	string userProductC = "partc";
	d->Construct(userProductA, userProductB, userProductC);

	Product* product = b->GetProduct();

	product->PrintProduct();

	return 0;
}