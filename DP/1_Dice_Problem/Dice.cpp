#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> dice{1, 2, 3, 4, 5, 6};
// Contains all possibles values of a dice
ll mod = 1e9 + 7;

void solve()
{
    ll sum;
    cin >> sum;

    if (sum < 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    vector<ll> dp(sum + 1, 0);
    dp[0] = 1;

    for (ll i = 1; i <= sum; i++)
    {
        for (auto j : dice)
        {
            if (i - j >= 0)
                dp[i] += dp[i - j] % mod;
            dp[i] = dp[i] % mod;
        }
    }

    cout << dp[sum] << endl;
}

int main()
{

    int test_cases;
    freopen("coin_problem_test_files.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}