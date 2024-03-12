#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    char grid[n][n];
    vector<vector<int>> dp(n,vector<int>(n,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        //move right
        for(int j=1;j<n;j++){
            if(grid[i][j]=='.')
            dp[i][j]+=dp[i][j-1];
            dp[i][j]%=mod;
        }

        if(i<n-1){
        //move down
        for(int j=1;j<n;j++){
            if(grid[i+1][j]=='.')
            dp[i+1][j]+=dp[i-1][j];
            dp[i+1][j]%=mod;
        }
        }

    }

    cout<<dp[n-1][n-1];


}

int main()
{

    int test_cases;
    freopen("grid_paths_test_file2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}