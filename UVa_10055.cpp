#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    while (cin >> a >> b)
    {
        if (b < a) swap(a, b);
        a = b - a;
        cout << a << endl;
    }
}
