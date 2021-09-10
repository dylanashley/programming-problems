
#include <iostream>
#include <string>
#include <vector>

using namespace std;


size_t next(size_t pos, string input, vector<string> ins_hist)
{
    if (input == "RIGHT")
    {
        return pos + 1;
    }

    if (input == "LEFT")
    {
        return pos - 1;
    }

    return next(pos, ins_hist[stoi(input) - 1], ins_hist);
}

int main()
{
    size_t test_cases;

    cin >> test_cases;

    size_t p = 0;

    for (size_t i = 0; i < test_cases; i++)
    {
        size_t n;

        cin >> n;

        int pos = 0;

        vector<string> ins_hist;

        for (size_t j = 0; j < n; j++)
        {
            string input;

            cin >> input;

            if (input != "RIGHT" && input != "LEFT")
            {
                cin >> input;

                cin >> input;
            }

            ins_hist.push_back(input);

            pos = next(pos, input, ins_hist);
        }

        cout << pos << endl;
    }

    return 0;
}

