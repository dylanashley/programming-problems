#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        // get oldNumber
        long long oldNumber;
        cin >> oldNumber;

        // check for eof
        if (cin.eof())
        {
            break;
        }

        // make newNumber
        long long newNumber = 0;
        while(oldNumber)
        {
            newNumber <<= 1;
            long long temp = 1 & oldNumber;
            newNumber |= temp;
            oldNumber >>= 1;
        }

        // print newNumber
        cout << newNumber << endl;
    }
}
