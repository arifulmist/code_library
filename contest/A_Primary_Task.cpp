#include<bits/stdc++.h>
#define ariful ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ariful
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll num = stoi(s);
        ll ssw = s.size();
        if (ssw<3) {
           
            cout<<"NO\n";
            continue;
        }
        int ss = s[0] - '0';  
        int xx = s[1] - '0';  
        ll last1 = num % 1000; 
        ll last= num % 100;
        if(ss == 1&&xx == 0&&last1 >=10&&last>=2) {
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
