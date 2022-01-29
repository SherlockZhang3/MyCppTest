/*================================================================
*     Copyright (c) 2022�� SherlockZhang. All rights reserved.
*
*   �ļ����ƣ�LinkListTest.cpp
*   �� �� �ߣ�SherlockZhang
*   ��    �䣺SherlockZhang@aliyun.com
*   �������ڣ�2021��01��28��
*   ��    ��������
*
#pragma once
================================================================*/
#include<iostream>
using namespace std;

//����
typedef struct LNode
{
	int data;
	LNode* next;
}*LinkList;
//������ͷ�巨����β�巨������һ��ʲô�أ�������һ��ͷ�ڵ�
//ͷ�巨
LinkList HeadInsert(LinkList& L);
//β�巨
LinkList TailInsert(LinkList& L);
//��ӡ����
void PrintLinkList(LinkList L);
//��ȡ��iλ��ֵ
LinkList GetElem(LinkList L, int i=3);

int main2() 
{
	try
	{
		LinkList List1= new LNode;		// == LNode* List1 = new LNode;
		LNode* List2 = new LNode;
		//����ͷ�巨
		HeadInsert(List1);
		PrintLinkList(List1);
		//����β�巨
		TailInsert(List2);
		PrintLinkList(List2);
		//GetElem(List1);
		return 0;
	}
	catch (const std::exception&)
	{
		cout << "ouch!" << endl;
	}

}
//ͷ�巨
LinkList HeadInsert(LinkList& L)
{
	cout << "ͷ�巨������������ֵ��������9999������";
	int x;
	cin >> x;
	L->next = NULL;
	while (x != 9999) 
	{
		LNode* s = new LNode;
		s->data = x;
		s->next = L->next;
		L->next = s;
		cout << "��������һ��ֵ: ";
		cin >> x;
	}
	return L;
}
//β�巨
LinkList TailInsert(LinkList& L)
{
	int x;
	LNode* Tail = L;
	cout << "β�巨������������ֵ��������9999������";
	cin >> x;
	while (x != 9999) {
		LinkList s = new LNode;
		s->data = x;
		s->next = NULL;
		Tail->next = s;
		Tail = s;
		cout << "��������һ��ֵ: ";
		cin >> x;
	}
	Tail->next = NULL;
	return L;
}
//��ӡ����
void PrintLinkList(LinkList L)
{
	try
	{
		cout << "���������Ϊ:";
		while (L->next)
		{
			cout << L->next->data << "->";
			L->next = L->next->next;
		}
		cout <<"NULL"<< endl;
	}
	catch (const exception&)
	{
		cout << "haha";
	}

}
//����Ų��ҽڵ�ֵ
LinkList GetElem(LinkList L, int i)
{
	if (i < 0)return NULL;
	while (L && i > 0) {
		L = L->next;
		i--;
	}
	if (L != NULL) {
		cout <<"ֵΪ"<< L->data;
		return L;
	}
	else {
		cout << "������" << endl;
		return NULL;
	}
	return L;
}
