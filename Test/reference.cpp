#include<iostream>
#include<string>
using namespace std;
int main1() //��Ҫ������ȥ��main
{
	int hello(int i,string);
	int hello(int *i,string);
	int search1(int i);
	void search2(int &i);

	int he = 1;
	int* s = &he;
	hello(s, "he�ĵ�ַΪ��");
	search1(he);
	hello(he,"he��ֵΪ��");
	search2(he);//search2�β���ʵ�ε����ã�����ʵ�λ�仯��search1
	hello(he,"he��ֵΪ��");

	cout << "�Ϻ������ֶ����ֶ������Ϻ���" << endl;
	int a, b=1;
	int* p = &a;
	int* q = &b,*r=NULL;
	
	hello(p,"a�ĵ�ַΪ��");
	hello(q,"b�ĵ�ַΪ��");
	int& c = b;	//c��b������
	hello(c,"c��ֵΪ��");//�˴�c�ĵ�ַ��b�������Ϻ������ֶ����ֶ������Ϻ�
	b++;
	hello(c,"b+1��c��ֵΪ��");
	r = &c;
	hello(q,"b�ĵ�ַΪ��");
	hello(r,"c�ĵ�ַΪ��");//������b��c�ĵ�ַ����һ����
	return 0;
}
int hello(int i,string j)
{
	cout << j << i << endl;
	return 0 ;
}
int hello(int* i, string j)
{
	cout <<  j << i << endl;
	return 0;
}
int search1(int i)
{
	cout << "search1����" << endl;
	++i;
	int* p = &i;
	hello(p,"search1֮��i�ĵ�ַΪ");
	cout << "search1����" << endl;
	return 0;
}
void search2(int& i) 
{
	cout << "search2����(����)" << endl;
	++i;
	int* p = &i;
	hello(p,"search2֮��i�ĵ�ַΪ");
	cout << "search2����" << endl;
}