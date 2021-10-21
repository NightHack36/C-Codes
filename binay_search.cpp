#include <bits/stdc++.h>
#include <math.h>
#define rep(i, k, n) for (int i = k; i < n; i++)
#define ll long long
#define MOD 1000000007ll
#define ROD 1000000009ll
#define INF 1e10
#define MIN(a, b) (a > b ? b : a)
using namespace std;
#define mp make_pair
#define pb push_back
#define piii pair<pair<ll, ll>, ll>
#define pii pair<ll, ll>
#define fi first
#define se second
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
	// for ( \
    //     auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
    //     blockTime.second; \
    //     debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    // )
#define MAXN 300005
ll n;
int main()
{
	ll ar[] = {1, 2, 3, 5, 6, 8, 9, 11, 15, 20, 25, 30};
	n = 12;
	// values are from index 0 to index 11
	// question?? ->  just smallest or equal to  no. than x
	//  if x=13 then ans = 11
	// if x=15 then ans = 15
	// if x= 26 then ans is 25

	ll low = 0, high = 11, mid, ans, x = 6;
	while (low <= high)
	{
		mid = (low + high) / 2;
		cout << "Lower index is: " << low << " Higher index is: " << high << " Middle index is: " << mid << "\n";
		for (int i = low; i <= high; i++)
			cout << ar[i] << " ";
		cout << "\n";
		cout << "Value at middle index is: " << ar[mid] << "\n";
		mid = (low + high) / 2;
		if (ar[mid] <= x)
		{
			cout << "since value is less than x so update my ans and set low=mid+1\n";
			ans = ar[mid];
			low = mid + 1;
		}
		else
			high = mid - 1, cout << "since value greater than x so just set high=mid-1\n";
		cout << "\n";
	}

	cout << ans;
}
/*
low<=high
0 - 11
6 - 11
9 - 11
11 - 11
11 - 10

low=0 high=11 ,mid=(low+high)/2
{1,2,4,5,6,7,9,11,15,20,25,30}






*/