#include<bits/stdc++.h>
using namespace std;

    int r, c;
    bool vis[1005][1005];
    char grid[1005][1005];
    
    bool valid(int i, int j) {
        if(i>=0 && i<r&&j>=0&& j<c && grid[i][j] == '.' &&!vis[i][j])
            return true;
        return false;
    }

    void dfs(int i, int j) {
        vis[i][j] = true;
         vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
        for(int k=0; k<4;k++) 
        {
            int ni=i+d[k].first;
            int nj=j+d[k].second;
            if(valid(ni,nj))
             {
                dfs(ni,nj);
            }
        }
    }

    int count() {
        int cc= 0;
        for(int i=0;i<r;i++)
     {
        for (int j=0;j<c;j++) 
        {
         if (!vis[i][j]&&grid[i][j]=='.')
          {
                 cc++;
                    dfs(i, j);
                }
            }
        }
        return cc;
    }

int main() {
    int n, m;
    cin>>n>>m;
    r=n;
    c=m;
    for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++) 
        {
            cin>>grid[i][j];
        }
    }
    cout<<count()<<"\n";

    return 0;
}
