#include <bits/stdc++.h>
using namespace std;

int maxi_xor(vector<int> &nums)
{
    int ans = 0;  // Max Value
    int mask = 0; // Prefix Mask -> 10000, 11000, 11100, 11110, 11111
    unordered_set<int> st;

    for (int i = 30; i >= 0; i--)
    {

        mask = mask | (1 << i);
        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i] & mask);
            // this is important such that binary representation of num (from nums) only includes till
            // ith bit.
        }

        int target = ans | (1 << i);
        // Check whether we can improve mx value by turning on the ith bit in mx
        // such that newMax is obtained
        // if a^b = x then a^x = b;
        for (auto ele : st)
        {
            if (st.count(ele ^ target))
            {
                ans = target;
                break;
            }
        }

        st.clear();
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << maxi_xor(nums) << endl;
}