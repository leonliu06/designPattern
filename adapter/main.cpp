#include "Adapter.h"
#include <iostream>
using namespace::std;

int main(int argc, char* argv[]) {
	Target* tar = new Adapter();
	tar->Request();
	return 0;
}