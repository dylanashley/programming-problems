#include <iostream>
#include <string>

using namespace std;

int main()
{
    double whitespace, lowercase, uppercase, symbols;
    string input;

    cin >> input;

    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] == '_')
        {
            whitespace += 1.0 / input.length();
        }

        else if (islower(input[i]))
        {
            lowercase += 1.0 / input.length();
        }

        else if (isupper(input[i]))
        {
            uppercase += 1.0 / input.length();
        }

        else
        {
            symbols += 1.0 / input.length();
        }
    }

    cout << whitespace << endl;

    cout << lowercase << endl;

    cout << uppercase << endl;

    cout << symbols << endl;
}
