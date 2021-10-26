#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;


    while (t--)
    {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;

        if ((a + b + c) <= d)
        {
            count = 1;
            cout << count << endl;
        }

        else if ((a+b+c>d) && (a + b <=d))
        {
            count = 2;
            cout << count << endl;
        }

        else 
        {
            count = 3;
            cout << count << endl;
        }
    }
}