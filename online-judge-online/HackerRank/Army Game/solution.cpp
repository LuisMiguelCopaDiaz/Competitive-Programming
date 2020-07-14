#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    int n1, m1;
    int total = 0;

    cin >> n >> m;

    n1 = n / 2;
    m1 = m / 2;
    total = n1 * m1;
    if (m % 2 != 0 && n % 2 != 0)
    {
        total += ((n + m) / 2);
    }
    else
    {
        if (n % 2 != 0)
        {
            total += m / 2;
        }
        else
        {
            if (m % 2 != 0)
                total += n / 2;
        }
    }
    cout << total << endl;
    return 0;
}