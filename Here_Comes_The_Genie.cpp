#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    long long sum = 0;
    int max = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < max)
        {
            max = v[i];
        }
        else
        {
            max = max - 1;
        }
        if (max > 0)
        {
            sum += max;
        }
    }

    cout << sum << endl;

    return 0;
}
