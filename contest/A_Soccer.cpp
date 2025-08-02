#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1<y1 && x2>y2) cout<<"no\n";
        else if(x1>y1 && x2<y2) cout<<"no\n";
        else cout<<"yes\n";

    }

}