#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pi pair<ll,ll>
#define nl "\n"
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
        string res="ADVITIYA";
        string s;
        cin>>s;
        ll ct=0;
        for(ll i=0;i<s.size();i++)
        {
            ll di=res[i]-s[i];
            if(di<0) di+=26;
             ct+=di;
        }
        cout<<ct<<"\n";
     }
}