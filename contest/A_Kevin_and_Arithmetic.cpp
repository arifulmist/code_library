#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int n,even=0,odd=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2)odd++;
            else even++;
        }

        if(even>0)cout<<odd+1<<"\n";
        else cout<<odd-1<<"\n";
        
    }

    return 0;
}