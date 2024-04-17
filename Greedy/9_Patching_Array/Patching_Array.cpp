#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{

    string s;
    int n;
    getline(cin, s);
    cin >> n;
    stringstream input(s);
    int t;
    vector<int> nums;
    while (input >> t)
    {
        nums.push_back(t);
    }
    long long curr_possible = 0;
    int ans = 0;
    int ind = 0;
    while (curr_possible < n)
    {
        if (ind < nums.size() && curr_possible >= nums[ind] - 1)
        {
            curr_possible += nums[ind];
            ind++;
        }
        else
        {
            ans++;
            curr_possible = (2 * curr_possible) + 1;
        }
    }

    cout << ans;
}

int main()
{

    int test_cases;
    freopen("Patching_Array_input_2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}