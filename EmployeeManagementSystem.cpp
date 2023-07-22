#include <iostream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "workerManager.h"
using namespace std;

int main()
{
    //Worker* worker = NULL;
    //worker = new Employee(1, "张三", 1);
    //worker->showInfo();
    //delete worker;

    //worker = new Manager(2,"李四",2);  
    //worker->showInfo();
    //delete worker;  

    //worker = new Boss(3, "老李", 3);
    //worker->showInfo();
    //delete worker; 

    //创建管理者
    WorkerManager wm;
    int choice = 0;
    while (true)
    {
        wm.ShowMenu(); //显示菜单
        cout << "请输出你的选择" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0: //退出系统
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        case 1: //添加职工
            wm.Add_Emp();
            break;
        case 2: //显示职工
            wm.show_Emp();
            break;
        case 3: //删除职工
            wm.Del_Emp();
            break;
        case 4: //修改职工
            wm.Mod_Emp();
            break;
        case 5: //查找职工
            wm.Find_Emp();
            break;
        case 6: //排序职工
            wm.Sort_Emp();
            break;
        case 7: //清空文件
            wm.Clean_File();
            break;
        default:
            system("cls");
            break;
        }
    }
    system("pause");
    return 0;
}

