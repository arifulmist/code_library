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
#define pb push_back
#define ll long long
#define vi vector<long long>
#define asort(ar,n) sort(ar,ar+n)
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define nl "\n"
#define shesh return 0;
#define p(ans) cout<<(ans)<<"\n"
#define TT ll t; cin >> t; for (ll tt = 1; tt <= t; tt++)
#define case(test) cout<<"Case "<<test<<": ";
using namespace std;
const ll mxx =1e6+3;
//bool isprime[mxx];//10^6
bitset<mxx>isprime;//10^8 hole//bit niye kaj hoi
 bool is_prime(ll num) {
    for(ll i=2; i*i<=num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}
const int N=1e5; 
int E; 
vector<bool> vis(N);
vector<ll> dis(N), par(N);
vector<ll>adj[N];
bool ans;
void bfs(int s){
queue<int> q;
q.push(s);
vis[s] = true;
par[s] = -1;
dis[s]=0;
while (!q.empty()) {
    int bap = q.front();
    q.pop();
    for (auto child : adj[bap]) {
        if (!vis[child]) {
            vis[child] = true;
            q.push(child);
            dis[child] = dis[bap] + 1;
            par[child] = bap;
        }
       //if(vis[child] && child!=par[bap])// detect cycle
         //{  
           // ans=true;
         //}  
    }
}
}
void dfs(int src)
 {
    vis[src]=true;
    for(auto child:adj[src])
    {
        // if(vis[child]&&parent[src]!=child)///detect cycle
         //{
            //ans=true;
        // }
        if(!vis[child])
        {
            par[child]=src;
            dfs(child);
        }
    }
 }
void sieve()
{
    //sieve of eratostheres
    for(ll i=2;i<mxx;i++)
        isprime[i]=true;

    for(ll i=2;i*i<mxx;i++)
       if (isprime[i])
           for(ll j=i*i;j<mxx;j+=i)
               isprime[j]=false;

}
int main()
{
    ariful
    ll t=1,m,n,c=0,x,y,z,a,b,d,q,k;
    cin >> t;
    while (t--)
    {
      string s,str;
      cin>>n>>m>>k>>s;
      ll cc=0,res=0;
      // peraa== sliding windows 
        for(ll j=0;j<s.size();j++)
        {
            if(s[j]=='1')
            {
               cc=0;
            }
            else{
                cc++;
            }
            if(cc==m)
            {
               res++;
               cc=0;
               j=k-1+j;
            }
        }
      p(res);
        
    }

    shesh
}
/*
int min_operations(int n, int m, int k, const string &s) {
    int operations = 0;
    int i = 0;

    while (i < n) {
        int zero_count = 0;
        while (i < n && s[i] == '0') {
            zero_count++;
            i++;
            if (zero_count == m) {
                operations++;
                i += k - 1;
                break;
            }
        }
        if (zero_count < m) i++;
    }

    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        cout << min_operations(n, m, k, s) << endl;
    }
    return 0;
}*/