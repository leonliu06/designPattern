#include "Builder.h"
#include "Product.h"
#include "Director.h"
#include <iostream>

using namespace::std;

int main(int argc, char* argv[]) {
	Builder* b = new ConcreteBuilder();
	Director* d = new Director(b);

	d->Construct("Hello ", "C++ ", "Language");

	Product* product = b->GetProduct();

	product->PrintProduct();

	return 0;
}