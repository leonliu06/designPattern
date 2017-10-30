//Aggregate.h
#pragma once

class Iterator;
typedef int Object;

class Aggregate {
public:
	virtual ~Aggregate();
	virtual Iterator* CreateIterator() = 0;
	virtual Object GetItem(int idx) = 0;
	virtual int GetSize() = 0;
protected:
	Aggregate();
private:
};

class ConcreteAggregate : public Aggregate {
public:
	enum{SIZE = 3};
	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator* CreaetIterator();
	Object GetItem(int idx);
	int GetSize();
protected:
private:
	Object _objs[SIZE];
};