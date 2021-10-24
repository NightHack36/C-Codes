// Kadane's algorithm is an iterative dynamic programming algorithm in which we search for a maximum sum contiguous subarray within a one-dimensional numeric array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cr = 0, m;
    m = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        cr += a[i];
        if (cr < 0)
            cr = 0;
        m = max(m, cr);
    }
    cout << m << endl;
    return 0;
}