#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0 && max < v[i])
        {
            max = v[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = v[i] + v[j];
            if (sum % 2 == 0 && sum > max)
            {
                max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}