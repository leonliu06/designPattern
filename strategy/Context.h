//Context.h
#pragma once

class Strategy;

/*
	������� Strategy ģʽ�Ĺؼ���Ҳ�� Strategy ģʽ�� Template ģʽ�ĸ����������ڡ�
	Strategy ͨ������ϡ���ί�У���ʽʵ���㷨��ʵ�֣����칹���� Template ģʽ���ȡ���Ǽ̳з�ʽ��
	������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/

class Context {
public:
	Context(Strategy* stg);
	~Context();
	void DoAction();
protected:
private:
	Strategy* _stg;
};
