#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>>d={{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool Valid(int x,int y) 
{
    if (x>=0&&x<n&&y>=0&&y<m&&!vis[x][y]&&(a[x][y]=='.'||a[x][y]=='B'))
        return true;
    return false;
}

bool bfs(int sx, int sy)
 {
    queue<pair<int,int>>q;
    q.push({sx,sy});
    vis[sx][sy]=true;
    while (!q.empty())
     {
         pair<int,int>par=q.front();
        int x=par.first;
        int y=par.second;
        q.pop();  
        if(a[x][y]=='B') 
        {
            return true;
        }
        for (auto i:d) {
            int nx = x + i.first;
            int ny = y + i.second;
            if (Valid(nx,ny)) 
            {
                vis[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }
    return false;
}

int main() {
    cin>>n>>m; 
    int sx,sy;
    for(int i=0; i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cin>>a[i][j];
            if(a[i][j]=='A') {
                sx=i;
                sy=j;
            }
            
        }
    }
    memset(vis, false, sizeof(vis));
    if(bfs(sx,sy)==true) 
    {
        cout<<"YES\n";
    } 
    else 
    {
        cout<<"NO\n";
    }
}
