#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,target,ar[1000001];
        int diff = INT_MAX;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cin>>target;
        int i = 0,j=n-1;
        int x=i,y=j;
        sort(ar,ar+n);
        while(i<j)
        {
            if(ar[i]+ar[j]>target)
                j--;
            else if(ar[i] + ar[j]<target)
                i++;
            else
            {
                if(ar[j] - ar[i]< diff)
                {
                    x= i;
                    y =j;
                    
                }
                i++;
                j--;
            }
        }
        cout<<ar[x]<<','<<ar[y]<<endl;
    }
}