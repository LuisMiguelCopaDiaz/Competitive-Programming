#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int i = 0;
    int n;
    int array[1000];

    cin >> t;

    while (i < t)
    {
        cin >> n;
        array[i] = n + 1;
        i++;
    }

    i = 0;
    while (i < t)
    {
        cout << array[i] << endl;
        i++;
    }

    return 0;
}