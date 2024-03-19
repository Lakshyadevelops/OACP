#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

void solve()
{
    ll n1, n2;
    cin >> n1;
    vector<ll> boys(n1);
    for (size_t i = 0; i < n1; i++)
    {
        cin >> boys[i];
    }

    cin >> n2;
    vector<ll> girls(n2);
    for (size_t i = 0; i < n2; i++)
    {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    ll ans = 0;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if(abs(boys[i]-girls[j])<=1){
            ans++;i++;j++;
        }
        else if(boys[i]<girls[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout << ans;
}

int main()
{

    int test_cases;
    freopen("BersuBall_input_3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
    // cin >> test_cases;
    // while (test_cases--)
    {
        solve();
    }

    return 0;
}