#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define l '\n'
const int M = 1e9 + 7;
int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool isPowerOfTwo(ll a)
{
    if (a == 0)
        return false;
    return (ceil(log2(a)) == floor(log2(a)));
}
void PrintVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << l;
}
ll fastPower(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b % 2 != 0) // b%2 == b&1
            res = (res * a % M) % M;
        a = (a % M * a % M) % M;
        b = b >> 1; // b/2 == b>>1
    }
    return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin>>n;
        cout<<fastPower(n,30);
    }
}