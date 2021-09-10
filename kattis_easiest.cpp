#include <iostream>
#include <string>

using namespace std;

int getDigitSum(int input);
int getP(int input);

int main()
{
    int input, output;

    while (true)
    {
        cin >> input;

        if (input == 0)
        {
            break;
        }

        output = getP(input);

        cout << output << endl;
    }
}

int getP(int input)
{
    for (int i = 11; true; ++i)
    {
        if (getDigitSum(input) == getDigitSum(i * input))
        {
            return i;
        }
    }
}

int getDigitSum(int input)
{
    int rv = 0;

    string number = to_string(input);

    for (int i = 0; i < number.length(); ++i)
    {
        rv += number[i] - '0';
    }

    return rv;
}
