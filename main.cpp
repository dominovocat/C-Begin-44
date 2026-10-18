#include <iostream>
using namespace std;

int main()
{
    // декларації
    float a, b, R;

    // введення
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // підрахунок
    R = (a - b) * (a > b) + (b - a) * (a <= b);

    // виведення
    cout << "R = " << R << endl;

    cout << "...";
    cin.get();
    cin.get();

    return 0;
}