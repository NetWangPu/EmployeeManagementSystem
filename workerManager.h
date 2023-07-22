#pragma once // 防止头文件重复包含
#include <iostream> // 包含输入输出流头文件
using namespace std; // 使用命名空间std
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream> // 文件流头文件
#define FILENAME "empFile.txt" // 文件名称宏定义

class WorkerManager
{
public:
	WorkerManager(); // 构造函数
	~WorkerManager(); // 析构函数
	void ShowMenu(); // 显示菜单
	void Add_Emp(); //添加职工
	void save(); // 保存文件
	int m_EmpNum; //记录职工人数
	Worker ** m_EmpArray; // 职工数组指针
	bool m_FileIsEmpty; // 文件是否为空
	int get_EmpNum(); // 获取文件中的人数
	void init_Emp(); // 初始化员工
	void show_Emp(); // 显示职工
	void Del_Emp(); // 删除职工
	int IsExist(int id); // 判断职工是否存在
	void Mod_Emp(); // 修改职工
	void Find_Emp(); // 查找职工
	void Sort_Emp(); // 排序职工
	void Clean_File(); // 清空文件
};
