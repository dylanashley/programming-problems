#include <iostream>
#include <string>

using namespace std;

struct person
{
    string name;
    long long total;
};


long long indexPerson(string name, person* people, long long length)
{
    // get index of person with name in people
    for (long long i = 0; i < length; i++)
    {
        if (people[i].name == name)
        {
            return i;
        }
    }

    // person not found; return length
    return length;
}


int main()
{
    bool flagFirst = true;
    while (true)
    {
        // read in number of people
        long long length;
        cin >> length;

        // break if eof
        if (cin.eof()) break;

        // if not first print out separator
        if (!flagFirst) {
            cout << endl;
        }
        flagFirst = false;

        // make array to hold people
        person* people = new person[length];

        // get names of people
        for (long long i = 0; i < length; i++)
        {
            cin >> people[i].name;
            people[i].total = 0;
        }

        // get gifts and process them
        for (long long i = 0; i < length; i++)
        {
            // get giverName, amountGiven, and numPeople
            string giverName;
            long long amountGiven, numPeople;
            cin >> giverName >> amountGiven >> numPeople;

            // continue if numPeople is 0
            if (!numPeople) {
                continue;
            }

            // get index of the giver
            long long giverIndex = indexPerson(giverName, people, length);

            // reduce total of giver by amount given
            people[giverIndex].total -= (amountGiven / numPeople) * numPeople;

            // give money to each individual
            for (long long i = 0; i < numPeople; ++i)
            {
                // get receiverName and receiverIndex
                string receiverName;
                cin >> receiverName;
                long long recieverIndex = indexPerson(receiverName, people, length);

                // increase total of receiver by amount received
                people[recieverIndex].total += (amountGiven / numPeople);
            }
        }

        // print out names and totals
        for (long long i = 0; i < length; ++i)
        {
            cout << people[i].name << ' ' << people[i].total << endl;
        }
    }
}
