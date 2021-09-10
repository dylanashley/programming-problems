#include <iostream>
#include <string>

using namespace std;

int main()
{
    int height;
    int label = 1;
    string path;

    cin >> height;

    if (cin.eof())
    {
        label = (1 << (height + 1)) - 1;
    }
    else
    {
        cin >> path;

        for (int i = 0; i < path.length(); ++i)
        {
            if (path[i] == 'L')
            {
                label = label << 1;
            }
            else
            {
                label = (label << 1) + 1;
            }
        }

        label = (1 << (height + 1)) - label;
    }

    cout << label << endl;
}
