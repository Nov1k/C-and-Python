#include<iostream>
using namespace std;
void main()
{
	
	setlocale(LC_ALL, "rus");
	int number = 0;
	int n;
	cout << "¬ведите число : " ;
	cin >> n;
	while (n <= 50)
	{
		if (n % 2 == 0)
		{
			cout << n<< endl;
			n += 1;
		}
		else
		{
			n += 1;
		}
	}
	
		
		



}