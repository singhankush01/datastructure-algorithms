#include<iostream>
using namespace std;

int main()
{
    int ans =0,n,ar[1001];
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans=ans^i;
    }
    for(int i=1;i<n;i++)
    {
        ans = ans^ar[i];
    }
    cout<<ans;
    return 0;
}