// Hacker rank
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int i, max = 0, k = 0;
    int arr[26];

    for (i = 0; i < 26; i++)
    {
        cin >> arr[i];
    }

    string str;
    cin >> str;
    char temp;

    for (i = 0; i < str.length(); i++)
    {
        temp = str[i];
        k = int(temp);

        if (max < arr[k - 97])
        {
            max = arr[k - 97];
        }
    }
    cout << max * str.length() << endl;
    return 0;
}
