#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

//�����virtual��ɾ�ɲ�ɾ ������д����ķ��� ��ɾ�ɲ�ɾ

class Employee :public Worker
{
public:
	//���캯��
	Employee(int id , string name, int did);
	//��ʾ������Ϣ
	virtual void showInfo();
	//��ȡ��λ����
	virtual string getDepName();

};