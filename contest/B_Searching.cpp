#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mx = -1;
    int v[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &v[i]);
        
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n;i++)
    {
        if(v[i]==x)
        {
            mx = i;
            break;
        }
        
    }
    printf("%d", mx);
}