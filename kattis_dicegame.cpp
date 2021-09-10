#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, gunnar, emma;

    cin >> a >> b >> c >> d;
    gunnar = a + b + c + d;

    cin >> a >> b >> c >> d;
    emma = a + b + c + d;

    if (gunnar > emma)
    {
        cout << "Gunnar" << endl;
    }
    else if (emma > gunnar)
    {
        cout << "Emma" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}
