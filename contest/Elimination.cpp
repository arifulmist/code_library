#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char>st;
        for(char ch:s)
        {
            if(!st.empty()&&(st.top()=='0'&&ch=='1'))
            {
                st.pop();
            }
            else 
            {
                st.push(ch);
            }
        }
        if(st.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
