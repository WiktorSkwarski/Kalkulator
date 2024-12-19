#include <iostream>

using namespace std;

int main()
{
	double a = 0, b = 0, result = 0;
	int choice;

	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> a;
	cout << "Podaj druga liczbe: " << endl;
	cin >> b;
	
	cout << "Wybierz opcje: " << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		result = a + b;
		cout << "Wynik: " << result << endl;
		break;
	case 2:
		result = a - b;
		cout << "Wynik: " << result << endl;
		break;
	case 3: 
		result = a * b;
		cout << "Wynik mnozenia: " << result << endl;
		break;
	case 4:
		if (b != 0)
		{
			result = a / b;
			cout << "Wynik dzielenia: " << result << endl;
		}
		else
		{
			cout << "Nie mozna dzielic przez zero!" << endl;
		}
	}
	return 0;
}