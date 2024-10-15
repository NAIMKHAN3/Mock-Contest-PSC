#include <bits/stdc++.h>
using namespace std;

int minDeferent(vector<int> &c, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += c[i];
    }

    bool dp[n+1][sum / 2+1];
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = sum / 2; j >= c[i]; j--)
        {
            for (int k = i; k >= 0; k--)
            {
                dp[k+1][j] = dp[k+1][j] || dp[k][j - c[i]];
            }
        }
    }

    int accSum = 0;
    for (int j = sum / 2; j >= 0; j--)
    {
        if (dp[n/2][j] || dp[(n+1)/2][j])
        {
            accSum = j;
            break;
        }
    }

    int minaSum = accSum;
    int moniSum = sum - accSum;
    
    return abs(moniSum - minaSum);
}

int main()
{
    int t;
    cin >> t;

  while(t--){
     int n;
        cin >> n;
        vector<int> c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        cout << minDeferent(c, n) << endl;
  }

    return 0;
}
