#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> totals(5, 0);

    int input;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> input;

            totals[i] += input;
        }
    }

    vector<int>::iterator max;

    max = max_element(totals.begin(), totals.end());

    int index = distance(totals.begin(), max);

    cout << index + 1 << ' ' << totals[index] << endl;
}
