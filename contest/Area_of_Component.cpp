#include<bits/stdc++.h>
using namespace std;
const int N=1001;
char v[N][N];
bool vis[N][N];
int dis[N][N];
 int n,e,m;
 vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
 bool valid(int i,int j)
 {
    if(i<0||i>=n||j<0||j>=m || vis[i][j]||v[i][j]=='-') 
    {
        return false;
    }
    return true;
 }
  int bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
   
    int aa=0;
    while(!q.empty())
    {
        pair<int,int> par=q.front();
        q.pop();
        int a=par.first;
        int b=par.second;
        aa++;
       // cout<<a<<" "<<b<<"\n";
        for(int i=0;i<4;i++)
        {int ci=a+d[i].first;
        int cj=b+d[i].second;
      if(valid(ci,cj)==true && vis[ci][cj]==false)
      {
        q.push({ci,cj});
       
        vis[ci][cj]=true;
      }
        }
    }
    return aa;
}
int main()
{ 
   
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {
            cin>>v[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    
    int mx=INT_MAX,com;
    bool flag=false;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(valid(i,j)&& v[i][j]=='.')
           {
            flag=true;
             com=bfs(i,j);
             mx=min(mx,com);
           }  
        }
    }
    if(flag) cout<<mx<<"\n";
    else cout<<-1<<"\n";
}