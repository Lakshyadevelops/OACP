#include <bits/stdc++.h>
#define INF 1e7
using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;

int nodes;
vector<vector<int>> capacity;
vector<vector<int>> adj;

int bfs(int s, int t, vector<int> &parent)
{
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INF});

    while (!q.empty())
    {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur])
        {
            if (parent[next] == -1 && capacity[cur][next])
            {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t)
{
    int flow = 0;
    vector<int> parent(nodes);
    int new_flow;

    while (new_flow = bfs(s, t, parent))
    {
        flow += new_flow;
        int cur = t;
        while (cur != s)
        {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}

int main()
{

    freopen("Maximum_Flow_input_1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    int source, sink, temp;
    cin >> nodes >> source >> sink;
    source--;
    sink--;
    adj.resize(nodes);
    capacity.resize(nodes);
    for(auto &i:capacity){
        i.resize(nodes,0);
    }

    while(cin>>temp){
        int from,to,size;
        from=temp;
        cin>>to>>size;
        from--;
        to--;
        capacity[from][to]=size;
        adj[from].push_back(to);
    }

    cout<<maxflow(source, sink);

    return 0;
}