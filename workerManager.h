#pragma once // ��ֹͷ�ļ��ظ�����
#include <iostream> // �������������ͷ�ļ�
using namespace std; // ʹ�������ռ�std
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream> // �ļ���ͷ�ļ�
#define FILENAME "empFile.txt" // �ļ����ƺ궨��

class WorkerManager
{
public:
	WorkerManager(); // ���캯��
	~WorkerManager(); // ��������
	void ShowMenu(); // ��ʾ�˵�
	void Add_Emp(); //���ְ��
	void save(); // �����ļ�
	int m_EmpNum; //��¼ְ������
	Worker ** m_EmpArray; // ְ������ָ��
	bool m_FileIsEmpty; // �ļ��Ƿ�Ϊ��
	int get_EmpNum(); // ��ȡ�ļ��е�����
	void init_Emp(); // ��ʼ��Ա��
	void show_Emp(); // ��ʾְ��
	void Del_Emp(); // ɾ��ְ��
	int IsExist(int id); // �ж�ְ���Ƿ����
	void Mod_Emp(); // �޸�ְ��
	void Find_Emp(); // ����ְ��
	void Sort_Emp(); // ����ְ��
	void Clean_File(); // ����ļ�
};
