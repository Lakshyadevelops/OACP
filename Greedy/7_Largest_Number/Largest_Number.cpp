#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static bool comp(int a, int b)
{
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}
ll mod = 1e9 + 7;

void solve()
{
    // string str;
    // getline(cin,str);
    // cout<<str;
    int t;
    vector<int> nums;
    while (cin >> t)
    {
        nums.push_back(t);
    }
    sort(nums.begin(),nums.end(),comp);
        string ans,temp;
        for(auto i:nums){
            temp=to_string(i);
            for(auto j:temp){
                ans.push_back(j);
            }
        }
        if(ans[0]=='0')ans="0";
        cout<<ans;
}

int main()
{

    int test_cases;
    freopen("Largest_Number_1.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}