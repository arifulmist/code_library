/*
  __  __ ____       _    ____  ___ _____ _   _ _       ___ ____  _        _    __  __
 |  \/  |  _ \     / \  |  _ \|_ _|  ___| | | | |     |_ _/ ___|| |      / \  |  \/  |
 | |\/| | | | |   / _ \ | |_) || || |_  | | | | |      | |\___ \| |     / _ \ | |\/| |
 | |  | | |_| |  / ___ \|  _ < | ||  _| | |_| | |___   | | ___) | |___ / ___ \| |  | |
 |_|  |_|____/  /_/   \_\_| \_\___|_|    \___/|_____| |___|____/|_____/_/   \_\_|  |_|

*/
#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define vi vector<long long>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define line "\n"
#define shesh return 0;
#define p(ans) cout<<(ans)<<"\n"
#define all(arr) (arr).begin(),(arr).end()
#define rall(arr) (arr).rbegin(),(arr).rend()
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
ll ans,n;
char bd[20][20];
bool col[20],ld[20],rd[20];
 void solved(ll r)
 {
     if(r==n)
     {
         ans++;
         return;
     }
     for(ll c=0;c<n;c++)
     {

         if(bd[r][c]=='.' && col[c]==false && rd[16+c-r]==false && ld[c+r]==false)
         {
             rd[16+c-r]=true;
             ld[c+r]=true;
             col[c]=true;
             solved(r+1);
             rd[16+c-r]=false;
             ld[c+r]=false;
             col[c]=false;
         }
     }
 }
int main()
{
   ariful
   ll t,m,c=0,x,y,z,a,b,d;
   //cin >> t;ll
   ll tc=0;
    while (cin>>n) {
            tc++;
            if(n==0) break;
    ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>bd[i][j];
        }
    }
    solved(0);
    case(tc);
    p(ans);

    }

  shesh
}
