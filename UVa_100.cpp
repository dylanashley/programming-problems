#include <iostream>

using namespace std;

long long get_max_cycle_length(long long a, long long b);
long long get_cycle_length(long long n);

int main()
{
    long long a, b;
    while (cin >> a >> b)
    {
        cout << a << ' ' << b << ' ';
        if (b < a) swap(a, b);
        long long max_cycle_length = get_max_cycle_length(a, b);
        cout << max_cycle_length << endl;
    }
}


long long get_max_cycle_length(long long a, long long b)
{
    long long max_cycle_length = 0;

    for (long long i = a; i <= b; ++i)
    {
        long long cycle_length = get_cycle_length(i);
        if (cycle_length > max_cycle_length) max_cycle_length = cycle_length;
    }

    return max_cycle_length;
}


long long get_cycle_length(long long n)
{
    long long cycle_counter = 1;

    while (n > 1)
    {
        if (n % 2) n = 3 * n + 1;
        else n = n / 2;
        ++cycle_counter;
    }

    return cycle_counter;
}
