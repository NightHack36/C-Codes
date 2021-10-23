//code for tower of hanoi problem through recursion
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, src, helper, dest);
    cout << "move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    towerOfHanoi(3, 'A', 'C', 'B');
}
