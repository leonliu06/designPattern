#include "Singleton.h"

#include <iostream>

using namespace std;

Singleton* Singleton::instance = 0;

Singleton::Singleton() {
	cout << "Singleton..." << endl;
}

Singleton* Singleton::getInstance() {
	if (instance == 0) {
		instance = new Singleton();
	}
	return instance;
}