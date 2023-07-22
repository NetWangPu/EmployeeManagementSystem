#include "boss.h"

//构造函数
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

//显示个人信息
void Boss::showInfo()
{
	cout << "职工的编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDepName()
		<< "\t岗位职责：管理公司所有的事务" << endl;
}
//获取工作岗位信息
string Boss::getDepName()
{
	return "总裁";
}