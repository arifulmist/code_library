#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int a[N];
int seg[4*N];
void build(int node,int start,int end)
{
    if(start==end)
    {
        seg[node]=a[start];
        return ;
    }
    int mid=(start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    seg[node]=seg[2*node]+seg[2*node+1];
}
int query(int node,int start,int end,int l,int r)
{
    if(r<start ||l>end) return 0;
    if(start>=l && end<=r) return seg[node];
    int mid=(start+end)/2;
    int sum1=query(2*node,start,mid,l,r);
    int sum2=query(2*node+1,mid+1,end,l,r);
    return sum1+sum2;
}
void update(int node,int start,int end,int index,int val)
{
    if(start==end)
    {
        a[start]=val;
        seg[node]=val;
        return ;
    }
    int mid=(start+end)/2;
    if(index<=mid)
    {
        update(2*node,start,mid,index,val);
    }
    else{
        update(2*node+1,mid+1,end,index,val);
    }
    seg[node]=seg[2*node]+seg[2*node+1];
}
int main()
{
int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    build(1,0,n-1);
   
       int t;
       cin>>t;
       while(t--)
       {
        int l,r;
        cin>>l>>r;
        int ans=query(1,0,n-1,l,r);
        cout<<ans<<"\n";
       }
}