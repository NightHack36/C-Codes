#include <bits/stdc++.h>
using namespace std;

int main()
{


#ifndef ONLINE_JUDGE

    freopen("Input.txt", "r", stdin);

    freopen("Output.txt", "w", stdout);

#endif // ONLINE_JUDGE
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, p;
        cin >> n >> x >> p;
        int marks;
        marks = x * 3 - (n - x);
        if (marks >= p)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;


    }
}