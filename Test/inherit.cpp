/*================================================================
*     Copyright (c) 2022�� SherlockZhang. All rights reserved.
*
*   �ļ����ƣ�inherit.cpp
*   �� �� �ߣ�SherlockZhang
*   ��    �䣺SherlockZhang@aliyun.com
*   �������ڣ�2021��01��28��
*   ��    �����̳е�ѧϰ,һ�ļ���
*
#pragma once
================================================================*/
#include<iostream>
#include<string>
using namespace std;
class animal//����
{
private:
	int pri_age;
public:
	int age;
	string name;
	string voice;
	animal()
	{
		cout << "---animal start---" << endl;
	}
	~animal()
	{
		cout << "---animal close---" << endl;
	}
protected:
	int pro_age;
};
class dog : public animal
{
public:
	int age;
	string name;
	string voice;
	dog(string inputName,int inputAge)
	{
		cout << "---dog    start---" << endl;
		voice = "woo~woo~";
		name = inputName;
		age = inputAge;
	}
	~dog()
	{
		cout << "---dog    close---" << endl;
	}
};
class human : public animal
{
private :
	int age;
	string name;
	int weigh;
public:
	enum sex
	{
		man,
		woman
	};
	int high = NULL;

	human()
	{
		cout << "---human  start---" << endl;
		age = 1;
	}
	~human()
	{
		cout << "---human  close---" << endl;
	}

	void setName(string inputName)
	{
		name = inputName;
	}
	string getName() 
	{
		return name;
	}
};
int main()
{
	cout << "---����  start!---" << endl;
	//���з���
	cout << "���з��� start!" << endl;
	human* zhang=new human;
	zhang->setName("��");
	cout << "��" << zhang->getName() << endl;
	delete zhang;
	dog* hashiqi = new dog("��ʿ��",1);
	cout << "����������" << hashiqi->name << endl;
	delete hashiqi;
	cout << "------------------" << endl;
	//ջ�з���
	cout << "ջ�з��� start!" << endl;
	human wang;
	wang.setName("��");
	cout << "��" << wang.getName() << endl;
	dog jinmao("��ë",2);
	cout << "����������" << jinmao.name << endl;
	cout << "---����  close!---" << endl;
	return 0;
}