#include <bits/stdc++.h>
using namespace std;

long long maxVisiblePipsOneStorey(long long n)
{
    if (n == 1)
    {
        return 20;
    }
    else if (n == 2)
    {
        return 36;
    }
    return 51;
}

long long maxVisiblePipsMultiStorey(long long n)
{

    long long quo, rem, mulOfFour;

    quo = n / 4;
    rem = n % 4;
    mulOfFour = n / 4;

    if (rem == 1)
    {
        return 20 + (3 * 4) + (mulOfFour * 44);
    }
    else if (rem == 2)
    {
        return 36 + (2 * 4) + (mulOfFour * 44);
    }
    else if (rem == 3)
    {
        return 51 + 4 + (mulOfFour * 44);
    }
    return 60 + ((mulOfFour - 1) * 44);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        if (N < 4)
        {
            cout << maxVisiblePipsOneStorey(N) << "\n";
        }
        else
        {
            cout << maxVisiblePipsMultiStorey(N) << "\n";
        }
    }

    return 0;
}
