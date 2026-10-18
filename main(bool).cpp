#include <iostream>
using namespace std;

int main()
{
    // декларації
    float a, b;
    bool R;

    // введення
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // підрахунок
    R = (a - b) == 0;

    // виведення
    cout << boolalpha;
    cout << "R = " << R << endl;

    cout << "...";
    cin.get();
    cin.get();

    return 0;
}