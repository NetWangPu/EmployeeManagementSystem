#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ���ı�ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDepName()
		<< "\t��λְ�𣺹���˾���е�����" << endl;
}
//��ȡ������λ��Ϣ
string Boss::getDepName()
{
	return "�ܲ�";
}