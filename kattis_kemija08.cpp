#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        string input, output, vowels;

        vowels = "aeiou";

        cin >> input;

        for (int i = 0; i < input.size(); ++i)
        {
            output.push_back(input[i]);

            if (vowels.find(input[i]) != string::npos)
            {
                i = i + 2;
            }
        }

        cout << output;

        if (cin.eof())
        {
            cout << endl;
            break;
        }

        cout << ' ';
    }
}
