#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	int sum=x+y+z;
	float tot=(4-sum)*1;
	tot+=x*1;
	tot+=(0.5)*y;
	float opp=(0.5)*y+(z*1);
	//cout<<tot<<" "<<opp;
	if(tot>opp)
	{
	    cout<<"Yes\n";
	    
	}
	else 
	{
	    cout<<"No\n";
	}

}