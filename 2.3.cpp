#include<iostream>
using namespace std;
int main() 
{
	float a, b, c;
	float d, e, f;
	cout << "������������Ϊ���������ߣ�" << endl;
	cin >> a; cin >> b; cin >> c;
	if (a - b < 0)
	{
		d = b - a;
	}
	else
	{
		d = a - b;
	}
	if (a - c < 0)
	{
		e = c - a;
	}
	else
	{
		e = a - c;
	}
	if (b - c < 0)
	{
		f = c - b;
	}
	else
	{
		f = b - c;
	}
	if (a + b > c && a + c > b && b + c > a && d < c && e < b && f < a)
	{
		cout << "���Թ���������" << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��һ������������";
		}
		else
		{
			cout << "���ǵ���";
		}
	
	}
	else
	{
		cout << "�����γ�������";
	}
}