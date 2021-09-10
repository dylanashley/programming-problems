#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long testCases;
    cin >> testCases;

    for (long long i = 0; i < testCases; ++i)
    {
        long long poleLength, antsNumber;
        cin >> poleLength >> antsNumber;

        // get minAnts and maxAnts
        vector<long long> minAnts, maxAnts;
        for (long long j = 0; j < antsNumber; ++j)
        {
            long long temp;
            cin >> temp;

            if (temp < poleLength - temp)
            {
                minAnts.push_back(temp);
                maxAnts.push_back(poleLength - temp);
            }
            else
            {
                minAnts.push_back(poleLength - temp);
                maxAnts.push_back(temp);
            }
        }

        // find minTime and maxTime
        long long minTime = -1;
        long long maxTime = -1;

        for (long long j = 0; j < antsNumber; ++j)
        {
            if (maxAnts[j] > maxTime)
                maxTime = maxAnts[j];
            if (minAnts[j] > minTime)
                minTime = minAnts[j];
        }

        // print results
        cout << minTime << ' ' << maxTime << endl;
    }
}
