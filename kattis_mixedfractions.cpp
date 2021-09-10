#include <iostream>

using namespace std;

int main()
{
    int top, bottom;

    while (true)
    {
        cin >> top >> bottom;

        if (top == 0 && bottom == 0)
        {
            break;
        }

        cout << top / bottom << " " << top % bottom << " / " << bottom << endl;
    }
}
