#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5;)
	{
		for (int j = 1; j <= i; )
		{
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
		
	}
}