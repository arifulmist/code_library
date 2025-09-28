#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pi pair<ll,ll>
#define nl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     string s,s2,s3;
     cin>>s>>s2>>s3;
     ll n=s.size();
     ll m=s2.size();
      vector<vector<int>>dp(n+1,(vector<int>(m+1,INT_MAX)));
      dp[0][0]=0;
    for(ll i=0;i<=n;i++)
     {
        for(ll j=0;j<=m;j++)
        {
           if(i>0)
           {
            if(s[i-1]!=s3[i+j-1])
            {
                dp[i][j]=min(dp[i][j],dp[i-1][j]+1);

            }
            else 
            {
                dp[i][j]=min(dp[i][j],dp[i-1][j]) ;
            }
           }
           if(j>0)
           {
            if(s2[j-1]!=s3[i+j-1])
            {
                dp[i][j]=min(dp[i][j],dp[i][j-1]+1);

            }
            else 
            {
                dp[i][j]=min(dp[i][j],dp[i][j-1]) ;
            }
           }
        }
     }
     cout<<dp[n][m]<<nl;
    }
    //  for(ll i=0;i<=n;i++)
    //  {
    //     for(ll j=0;j<=m;j++)
    //     {
    //        cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    //  }
    //  // print lcs
    //  ll i=n;
    //  ll j=m;
    //  string ans;
    //  while(i!=0&& j!=0)
    //  {
    //     if(s[i-1]==ss[j-1])
    //     {
    //         ans+=s[i-1];
    //         i--;
    //         j--;
    //     }
    //     else 
    //     {
    //         if(dp[i][j-1]>dp[i-1][j])
    //         {
    //             j--;
    //         }
    //         else 
    //         {
    //             i--;

    //         }
    //     }
    //  }
    //  reverse(ans.begin(),ans.end());
    //  cout<<ans<<nl;

}