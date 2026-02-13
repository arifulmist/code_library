#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define FileIO freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define vi vector<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define p(ans) cout<<(ans)<<"\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
using namespace std;
bool binaryy(vector<ll>&arr,ll key)
{
    ll mid, left = 0, right = arr.size() - 1;
    while(left<=right)
    {
        mid = (right - left)/2 + left;
        if(arr[mid]==key)
        {
            return true;
            break;
        }
        else if(arr[mid]>key)
        {
            right = mid - 1;
        }
        else 
        {
            left = mid + 1;
        }
    }
    return false;
}
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    cin >> n >> q;
    vi v(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < q; i++)
    {
        cin >> x;
        bool fla = binaryy(v, x);
        (fla) ? YES : NO;
    }
}