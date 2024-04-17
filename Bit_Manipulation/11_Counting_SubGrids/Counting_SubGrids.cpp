#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int ans=0;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>grid[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int count=0;
            for (int col = 0; col < n; col++)
            {
                if(grid[i][col]&&grid[j][col])count++;
            }
            ans+=(count*(count-1))/2;
        }
    }
    cout<<ans;
}

int main()
{

    int test_cases;
    freopen("CountingSubgrids_2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}