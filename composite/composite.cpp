//composite.cpp
#include "composite.h"
#include <iostream>
#include <algorithm>

using namespace::std;

Component::Component(){}

Component::~Component(){}

void Component::Add(Component* com)
{
	cout << "add" << endl;
}

void Component::Remove(Component* com)
{
	//..
}

void Component::Operation()
{
	//..
	cout << "Component::Operation" << endl;
}

Component* Component::GetChild(int index)
{
	return NULL;
}

Leaf::Leaf(){}
Leaf::~Leaf(){}

void Leaf::Operation()
{
	cout << "Leaf::Operation" << endl;
}

Composite::Composite(){}
Composite::~Composite(){}

void Composite::Add(Component* com)
{
	this->m_ComVec.push_back(com);
}

void Composite::Remove(Component* com)
{
	vector<Component*>::iterator iter;
	iter = std::find(this->m_ComVec.begin(), m_ComVec.end(), com);
	while (m_ComVec.end() != iter)
	{
		m_ComVec.erase(iter);
		iter = std::find(m_ComVec.begin(), m_ComVec.end(), com);
	}
}

void Composite::Operation()
{
	cout << "Composite::Operation" << endl;
	vector<Component*>::iterator iter = this->m_ComVec.begin();
	for(; iter != this->m_ComVec.end(); iter++)
	{
		(*iter)->Operation();//ตÝน้
	}
}

Component* Composite::GetChild(_Uint32t index)
{
	if(index < 0 || index > this->m_ComVec.size())
	{
		return NULL;
	}
	return this->m_ComVec[index];
}


