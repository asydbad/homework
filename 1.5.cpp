#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, C=0;
	cout << "���뻪�϶�" << endl;
	cin >> f;
	C = (f - 32.0) / 1.8;
	cout << "��Ӧ�����϶�Ϊ";
	printf("%.2f", C);
	return 0;
}