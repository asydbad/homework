#include<iostream>
using namespace std;
int main() 
{
	char m;
	float a, b,r;
	cout << "����һ��������ѡ�����㷽ʽ" << endl;
	cin >> m;
	if (m == '+')
	{
		cout << "��������������ʼ����" << endl;
		cin >> a;
		cin >> b;
		r = a + b;
		printf("%.2f", r);
	}
	if (m == '-')
	{
		cout << "��������������ʼ����(ǰ����)" << endl;
		cin >> a;
		cin >> b;
		r = a - b;
		printf("%.2f", r);
	}
	if (m == '*')
	{
		cout << "��������������ʼ����" << endl;
		cin >> a;
		cin >> b;
		r = a * b;
		printf("%.2f", r);
	}
	if (m == '/')
	{
		cout << "��������������ʼ����" << endl;
		cin >> a;
		cin >> b;
		if (b == 0)
		{
			cout << "��ĸ��Ϊ��!" << endl;
		}
		else
		{
			r = a / b;
			printf("%.2f", r);
		}
	}

}