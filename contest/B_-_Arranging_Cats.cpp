#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
   {

     int n;
     cin>>n;
     string s1,s2;
     cin>>s1>>s2;
     int count1=0;
     int count2=0;
     for(int i=0;i<n;i++)
     {
         if(s1[i]=='1' && s2[i]=='0') count1++;
        else if(s1[i]=='0' && s2[i]=='1')
        {
            count2++;
        }
     }
     if(s1==s2) cout<<0<<endl;
    else if(count1<=count2) cout<<count2<<endl;
     else cout<<(count1)<<endl;




   }
return 0;

}