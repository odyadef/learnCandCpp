#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Введите аргумент функций (вещественное число): " << endl;
    cin >> x;

    cout << "Квадрат                " << x << " = " << x*x          << endl;
    cout << "Куб                    " << x << " = " << pow(x, 3)    << endl;
    cout << "Квадратный корень      " << x << " = " << sqrt(x)      << endl;
    cout << "Экспонента             " << x << " = " << exp(x)       << endl;
    cout << "Натуральный логарифм   " << x << " = " << log(x)       << endl;
    cout << "Десятичный логарифм    " << x << " = " << log10(x)     << endl;
    cout << "Синус                  " << x << " = " << sin(x)       << endl;
    cout << "Косинус                " << x << " = " << cos(x)       << endl;
    cout << "Тангенс                " << x << " = " << tan(x)       << endl;
    cout << "Арксинус               " << x << " = " << asin(x)      << endl;
    cout << "Арккосинус             " << x << " = " << acos(x)      << endl;
    cout << "Арктангенс             " << x << " = " << atan(x)      << endl;

    return 0;
}