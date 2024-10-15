#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    };
    int target;
    cin >> target;
    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
        {
            result = i;
            break;
        }
    };
    cout << result;

    return 0;
}