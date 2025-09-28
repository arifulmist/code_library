#include <bits/stdc++.h>
using namespace std;
const int N =1e6+5;
int grp_size[N];
int par[N];
int level[N];
bool ans;
void dsu_initialize(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        grp_size[i]=1;
        level[i]=0;
    }
}
int dsu_find(int node)
{
    if(par[node]==-1)
    {
        return node;
    }
    int leader=dsu_find(par[node]);
    par[node]=leader;//constant time 
    return leader;
}
bool dsu_union_by_level(int node1, int node2)
{
    //ata use kora easy
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(leaderA!=leaderB){
    if(level[leaderA]>level[leaderB])
    {
       par[leaderB]=leaderA;
       
    }
    else if(level[leaderA]<level[leaderB])
    {
       par[leaderA]=leaderB;
       
    }
    else 
    {
        par[leaderA]=leaderB;
        level[leaderB]++;
        
    }
    return false;
    }
    return true;
}
int main()
{
    
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
     int c=0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        if(dsu_union_by_level(a,b)) c++;

    }
   cout<<c;

}