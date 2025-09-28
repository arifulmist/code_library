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
using namespace std;
ll n,k,x;

ll check_child(ll node,ll d)
{
    if(d<0 || node>n) return 0;
    if(d==0) return 1;
    ll left = node,right=node;
    while(d--)
    {
        left*=2;
        right*=2;
        right++;
        if(left>n) return 0;
    }
    return min(right,n)-left+1;
}

ll solved(ll curr,ll pre,ll k,ll ans)
{
    if(curr>n || curr <=0) return 0;
    if(k==0)
    {
        ans++;
        return ans;
    }
    ll left=curr*2;
    ll right = (curr*2)+1;
    ans = solved(curr/2,curr,k-1,ans);
    if(pre!=left)ans+=check_child(left,k-1);
    if(pre!=right)ans+=check_child(right,k-1);
    return ans;

}

int main()
{
    ariful
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>k;
        cout<<solved(x,-1,k,0)<<endl;
    }
}
