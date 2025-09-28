#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,w;
    cin>>n>>w;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int tot=1000-w;
     bool dp[tot+1]={false};
     dp[0]=true;
     for(int i=0;i<n;i++)
     {
        for(int j=tot;j>=arr[i];j--)
        {
            if(dp[j-arr[i]])
            {
                dp[j]=true;
            }
        }
     }
     if(dp[tot])
     {
        cout<<"YES\n";
     }
     else 
     {
        cout<<"NO\n";
     }
    
   }  
}