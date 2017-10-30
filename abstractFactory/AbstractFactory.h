#pragma once

class AbstractProductA;
class AbstractProductB;

class AbstracFactory
{
public:	
	virtual ~AbstracFactory();
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;

protected:
	AbstracFactory();

private:

};

class ConcreteFactory1 : public AbstracFactory {
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};

class ConcreteFactory2 : public AbstracFactory {
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};
