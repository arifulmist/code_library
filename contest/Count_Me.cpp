#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;
cin>>t;
getchar();
while(t--)
{
    string s;
    getline(cin, s);
    string word;
    stringstream ss(s);
    map<string, int> mp;
    string str;
    int mx=0;
    while (ss >> word)
    {
        mp[word]++;
    if(mp[word]>mx)
    {
        mx=mp[word];
        str=word;
    }
    }
    cout<<str<<" "<<mx<<"\n";
}
    return 0;
}