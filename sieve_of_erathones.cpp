#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool IsPrime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(i%a==0)
            return false;
    }
    return true;
}
int main()
{
    int n,ar[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ar[i] =1;
    }
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(IsPrime(i))
        {
            for(int j=i;j*i<n;j++)
            {
                ar[j*i] = 0;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        if(ar[i])
            cout<<i<<' ';
    }
    return 0;
}