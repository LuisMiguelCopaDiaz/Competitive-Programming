#include <bits/stdc++.h>

using namespace std;

int main()
{

    int q;
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cin >> q;
    long long n[100000];
    int i = 0;
    while (i < q)
    {
        cin >> n[i];
        i++;
    }

    i = 0;
    while (i < q)
    {
        long long m = 1;
        int j = 0;
        int cont = 0;
        while (j < 15)
        {
            m = m * primes[j];
            if (m <= n[i])
            {
                cont++;
            }
            j++;
        }
        cout << cont << endl;
        i++;
    }

    return 0;
}