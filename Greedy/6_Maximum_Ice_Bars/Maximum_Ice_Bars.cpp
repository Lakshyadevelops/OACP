#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> costs(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> costs[i];
    }
    int coins;
    cin >> coins;
    int ans = 0;
    sort(costs.begin(), costs.end());
    for (auto i : costs)
    {
        if (i <= coins)
        {
            ans++;
            coins -= i;
        }
        else
        {
            cout << ans;
            return;
        }
    }
    cout << ans;
}

int main()
{

    int test_cases;
    freopen("Maximum_Ice_Bars_3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}