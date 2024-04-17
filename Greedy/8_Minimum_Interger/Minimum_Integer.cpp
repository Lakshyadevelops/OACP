#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    string s;
    int k;
    cin>>s>>k;
    if(k==s.size()){
        cout<<"0";return;
    }
    string ans;
    vector<char> stack;
    for(auto i:s){
        while(!stack.empty() && stack.back() > i && k>0){
            stack.pop_back();
            k--;
        }
        stack.push_back(i);
    }
    for(auto i:stack){
        if(ans.empty() && i=='0')
        continue;
        ans.push_back(i);
    }
    
    if(ans.empty()){
        cout<<"0";return;
    }
    cout<<ans;


}

int main()
{

    int test_cases;
    freopen("Minimum_Integer_input_2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}