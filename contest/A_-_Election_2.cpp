#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t,a;
  cin>>n>>t>>a;
  if(min(t,a)+n-t-a>=max(t,a)) cout<<"No";
  else cout<<"Yes";
}