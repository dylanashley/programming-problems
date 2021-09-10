#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double h, v;

    cin >> h >> v;

    v *= acos(-1) / 180;

    cout << ceil(h / sin(v)) << endl;
}
