#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[800];
	int n = 0, l = 0, s = 0, o = 0;
	cin.get(a,800);
	for (int i = 0;i<=strlen(a); i++)
	{
		
		if (((a[i] + 1 - 1) > 96 && a[i] + 1 - 1 <123))
		{
			l += 1;
		}
		else if((a[i]+1-1)>64&&(a[i]+1-1)<91)
		{
			l += 1;
		}
		else if ((a[i]+1-1) >= 48 && (a[i]+1-1) <= 57)
		{
			n += 1;
			
		}
		else if ((a[i]+1-1) == 32)
		{
			s += 1;
			
		}
		else
		{
			o += 1;
			
		}
	}
	cout << "��ĸ" << l <<"��"<< "�ո�" << s << "��" << "����" << n << "��" << "����" << o - 1 << "��";
	
	return 0;
}