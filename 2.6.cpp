#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	int a, b, c;
	cout << "输入两个正整数" << endl;
	cin >> a; cin >> b;
	if (a > b)
	{
		c = a;
		while (1)
		{
			if (c % a == 0 && c % b == 0)
			{
				cout << "最小公倍数为" << c << endl;
				break;
			}
			else
			{
				c += 1;
			}
		}
	}
	else
	{
		c = b;
		while (1)
		{
			if (c % a == 0 && c % b == 0)
			{
				cout << " 最小公倍数为" << c << endl;
				break;
			}
			else
			{
				c += 1;
			}
		}
	}
	if (a > b)
	{
		c = b;
		while (1)
		{
			if (a % c == 0 && b % c == 0)
			{
				cout << "最大公约数为" << c << endl;
				break;
			}
			else
			{
				c -= 1;
			}
		}
	}
	else
	{
		c = a;
		while (1)
		{
			if (a % c == 0 && b % c == 0)
			{
				cout << " 最大公约数为" << c << endl;
				break;
			}
			else
			{
				c -= 1;
			}
		}
	}
}