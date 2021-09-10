#include <iostream>

using namespace std;

int main()
{
    while (true) {
        // get input
        long long n, k, x;
        cin >> n;
        if (cin.eof())
            break;
        cin >> k;

        // calculate x
        x = ((n * k) / (k - 1)) - 1;
        if ((n * k) % (k - 1) != 0)
            x += 1;

        // print x
        cout << x << endl;
    }
}
