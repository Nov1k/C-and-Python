#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	int value;
	int age = 18;
	do
	{
		cout << "�������� ������� ��� ���: ";
		cin >> value;
		if (value == age)
		{
			cout << "�� �������!" << endl;
			
		}

		else if (value < age)
		{
			cout << "�� ����� ������, ���������� ����� ����� ������... " << endl;

		}
		else
			cout << "�� ����� ������, ���������� ����� ����� ������..." << endl;
	} while (value < age || value > age);

	
	
	

	



}
