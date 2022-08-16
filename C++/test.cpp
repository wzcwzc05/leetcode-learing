#include <bits/stdc++.h>
using namespace std;
int a[10002], t[10002], dp[10002][10002];
int dep, n, m;
const int MAX = 1000002;
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d %d", &t[i], &a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            if (j - t[i] >= 0)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - t[i]] + a[i]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans = max(ans, dp[m][i]);
    }
    cout << ans << endl;
    return 0;
}