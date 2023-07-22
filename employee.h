#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

//下面的virtual可删可不删 子类重写父类的方法 可删可不删

class Employee :public Worker
{
public:
	//构造函数
	Employee(int id , string name, int did);
	//显示个人信息
	virtual void showInfo();
	//获取岗位名称
	virtual string getDepName();

};