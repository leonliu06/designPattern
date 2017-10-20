//main.cpp
#include "composite.h"
#include <iostream>
using namespace::std;

int main()
{
	Leaf* pLeaf1 = new Leaf();
	Leaf* pLeaf2 = new Leaf();
	
	//叶子与组合对象都继承了相同的接口，所以语法上是对的，但
	//叶子Add,Remove,GetChild函数没有重新定义，都继承自基类，
	//没有实际意义。
	pLeaf1->Add(pLeaf2);
	pLeaf1->Remove(pLeaf2);
	
	//叶子结点实现了Opeeration()方法，
	pLeaf1->Operation();
	
	//组合对象实现了基类的所有接口，所以可以做各种操作（Add,Remove
	//GetChild,Operation）。
	Composite* pCom = new Composite();
	//组合对象添加叶子结点
	pCom->Add(pLeaf1);
	pCom->Add(pLeaf2);
	pCom->Operation();
	
	Composite* pRoot = new Composite();
	pRoot->Add(new Leaf());
	//组合对象添加组合对象
	pRoot->Add(pCom);
	pRoot->Operation();
	cin.get();
	
	return 0;
}