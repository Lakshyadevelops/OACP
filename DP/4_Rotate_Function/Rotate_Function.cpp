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

    ll ans = INT_MIN;
    ll temp = 0;
    ll arr_sum = accumulate(nums.begin(), nums.end(), 0);
    for (int i = 0; i < array_size; i++)
    {
        temp += (nums[i] * i);
    }
    ans = max(ans, temp);
    for (int i = array_size - 1; i >= 0; i--)
    {
        temp -= array_size * nums[i] - arr_sum;
        ans = max(ans, temp);
    }
    cout << ans;
}

int main()
{

    int test_cases;
    freopen("Rotate_Function_input_3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}