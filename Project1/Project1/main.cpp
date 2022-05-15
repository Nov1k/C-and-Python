#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	int value;
	int age = 18;
	do
	{
		cout << "Угадайте сколько мне лет: ";
		cin >> value;
		if (value == age)
		{
			cout << "Вы угадали!" << endl;
			
		}

		else if (value < age)
		{
			cout << "Вы ввели меньше, попробуйте взять число больше... " << endl;

		}
		else
			cout << "Вы ввели больше, попробуйте взять число меньше..." << endl;
	} while (value < age || value > age);

	
	
	

	



}
