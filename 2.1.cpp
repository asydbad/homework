#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		char i;
		cout << "����һ����ĸ" << endl;
		cin >> i;
		if (islower(i))
			{
				cout <<char(toupper(i));
			}
		else
			{while(1)
				{
					cout << "�����µ��ַ� �����������ASCII��" << endl;
					cin >> i;
					cout << i+1<<endl;
				}
				
			}
	}
}