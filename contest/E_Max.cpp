#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mx = 0,x;
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&x);
        if(x>mx)
        {
            mx = x;
        }
    }
    printf("%d", mx);
}