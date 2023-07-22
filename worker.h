#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker
{
public:

	//显示个人信息
	virtual void showInfo() = 0;
	//获取岗位名称
	virtual string getDepName() = 0;
	
	int m_Id; //职工编号
	string m_Name; //职工名称
	int m_DeptId; //职工所在部门
};