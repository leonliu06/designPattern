//main.cpp
#include "composite.h"
#include <iostream>
using namespace::std;

int main()
{
	Leaf* pLeaf1 = new Leaf();
	Leaf* pLeaf2 = new Leaf();
	
	//Ҷ������϶��󶼼̳�����ͬ�Ľӿڣ������﷨���ǶԵģ���
	//Ҷ��Add,Remove,GetChild����û�����¶��壬���̳��Ի��࣬
	//û��ʵ�����塣
	pLeaf1->Add(pLeaf2);
	pLeaf1->Remove(pLeaf2);
	
	//Ҷ�ӽ��ʵ����Opeeration()������
	pLeaf1->Operation();
	
	//��϶���ʵ���˻�������нӿڣ����Կ��������ֲ�����Add,Remove
	//GetChild,Operation����
	Composite* pCom = new Composite();
	//��϶������Ҷ�ӽ��
	pCom->Add(pLeaf1);
	pCom->Add(pLeaf2);
	pCom->Operation();
	
	Composite* pRoot = new Composite();
	pRoot->Add(new Leaf());
	//��϶��������϶���
	pRoot->Add(pCom);
	pRoot->Operation();
	cin.get();
	
	return 0;
}