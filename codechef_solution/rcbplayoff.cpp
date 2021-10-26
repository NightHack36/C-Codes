#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if (x + 2 * z >= y || x + 1 * z >= y)
            cout << " Yes" << endl;
        else
            cout << " No" << endl;
    }
}