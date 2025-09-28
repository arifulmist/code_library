#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {  
        int x;
       cin>>x;
        vector<int>v;
        for(auto i:mat[x])
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(v.empty()) cout<<-1;
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}