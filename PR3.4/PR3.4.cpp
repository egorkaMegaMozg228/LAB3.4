// Lab_03_4.cpp
// < Земцов Єгор Юрійович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y <= sqrt(R * R - x * x) && y <= x + R) ||
		(y >= -sqrt(R * R - x * x) && (x <= 0))) {
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}