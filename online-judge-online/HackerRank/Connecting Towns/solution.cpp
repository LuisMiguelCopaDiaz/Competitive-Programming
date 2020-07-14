#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i = 0;
    long long answer[1000];
    cin >> n;

    int t;
    while (i < n)
    {
        cin >> t;
        int j = 0;
        int ni;
        long long product = 1;
        while (j < t - 1)
        {
            cin >> ni;
            product = (product * ni) % 1234567;
            j++;
        }
        answer[i] = product;
        i++;
    }

    i = 0;
    while (i < n)
    {
        cout << answer[i] << endl;
        i++;
    }
    return 0;
}