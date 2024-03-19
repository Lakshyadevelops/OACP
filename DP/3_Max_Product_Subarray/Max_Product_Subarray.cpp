#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    ll array_size;
    cin >> array_size;
    vector<ll> nums(array_size);
    for (auto i = 0; i < array_size; i++)
    {
        cin >> nums[i];
    }

    ll ans = 0;
    ll temp = 1;
    for (auto i : nums)
    {
        temp *= i;
        temp %= mod;
        ans = max(ans, temp);
        if (temp == 0)
            temp = 1;
    }
    temp = 1;
    for (int i = array_size - 1; i >= 0; i--)
    {
        temp *= nums[i];
        temp %= mod;
        ans = max(ans, temp);
        if (temp == 0)
            temp = 1;
    }
    cout << ans;
}

int main()
{

    int test_cases;
    freopen("Max_Prod_SubArray_input_3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}