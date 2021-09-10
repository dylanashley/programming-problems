#include <iostream>
#include <string>

using namespace std;

int main() {
    bool first = true;
    int length;
    string s;

    while(getline(cin, s))
    {
        length = s.length();

        for (int i = 0; i < length; i++)
        {
            if (s[i] == '"')
            {
                if (first)
                {
                    cout << "``";
                }
                else
                {
                    cout << "''";
                }

                first = !first;
            }
            else
            {
                cout << s[i];
            }
        }

        cout << endl;
    }
    return 0;
}
