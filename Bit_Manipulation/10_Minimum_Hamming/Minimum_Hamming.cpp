#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    int t;
    vector<int> nums;
    while (cin >> t)
    {
        nums.push_back(t);
    }
    int n = nums.size();
        int ans = 0;
        for (int j = 0; j < 32; j++) {
            int one = 0, zero = 0;
            for (int i = 0; i < n; i++) {
                if ((nums[i] >> j) & 1) {
                    one++;
                } else {
                    zero++;
                }
            }
            ans += one * zero;
        }



    cout << ans;
}

int main()
{

    int test_cases;
    freopen("HammingDistance_2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}