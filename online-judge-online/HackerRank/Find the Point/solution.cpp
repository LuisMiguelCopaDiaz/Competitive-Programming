#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int px, py, qx, qy;

    cin >> n;
    int i = 0;
    int array[2][15];



    while (i < n) {
        cin >> px >> py >> qx >> qy;
        array[0][i] = 2 * (qx - px) + px;
        array[1][i] = 2 * (qy - py) + py;
        i++;
    }

    i = 0;
    while (i < n) {
        cout << array[0][i] << " " << array[1][i] << endl;
        i++;
    }


    return 0;
}
