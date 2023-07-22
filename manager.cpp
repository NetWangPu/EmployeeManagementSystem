#include "manager.h"

//构造函数
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

//显示个人信息
void Manager::showInfo()
{
	cout << "职工的编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDepName()
		<< "\t岗位职责：完成老板交给的任务，并下发任务给普通员工" << endl;
}
//获取工作岗位信息
string Manager::getDepName()
{
	return "经理";
}