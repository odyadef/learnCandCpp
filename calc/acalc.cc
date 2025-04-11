#include <iostream>

using namespace std;

int main()
{
	double x, y;
	char operation;

	cout << "Введите строку вида \"число операция число\" "<< endl;
	cin >> x >> operation >> y;

	double result;

	switch (operation)
	{
		case '+': result = x + y; break;
		case '-': result = x - y; break;
		case '*': result = x * y; break;
		case '/': result = x / y; break;
		default: result = 0;
	}

	cout << x << " " << operation << " " << y << " = " << result << endl;

	return 0;
}
