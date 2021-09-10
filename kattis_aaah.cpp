#include <iostream>
#include <string>

using namespace std;

int main()
{
    string able, required;

    cin >> able >> required;

    if (able.size() >= required.size())
    {
        cout << "go" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
