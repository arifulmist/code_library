#include<bits/stdc++.h>
using namespace std;

    int r, c;
    bool vis[1005][1005];
    char grid[1005][1005];
    vector<int>rm;
    bool valid(int i, int j) {
        if(i>=0 && i<r&&j>=0&& j<c && grid[i][j] == '.' &&!vis[i][j])
            return true;
        return false;
    }

    int dfs(int i, int j) {
        vis[i][j] = true;
        int rmm=1;
         vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
        for(int k=0; k<4;k++) 
        {
            int ni=i+d[k].first;
            int nj=j+d[k].second;
            if(valid(ni,nj))
             {
               rmm+=dfs(ni,nj);
            }
        }
        return rmm;
    }

    void count() {
    
        for(int i=0;i<r;i++)
     {
        for (int j=0;j<c;j++) 
        {
         if (!vis[i][j]&&grid[i][j]=='.')
          {
                 
                 int cc= dfs(i, j);
                   rm.push_back(cc);
                }
            }
        }
    
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
    count();
    if(rm.empty()) cout<<0<<"\n";
   else{

 sort(rm.begin(),rm.end());
    for(auto i:rm)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
   }
    return 0;
}
