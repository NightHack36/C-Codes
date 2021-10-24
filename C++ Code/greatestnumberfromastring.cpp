// Form the greatest number from a given string

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "520042326";
    sort(s.begin(), s.end(), greater<int>());
    int x = stoi(s);
    cout << x << endl;
    return 0;
}