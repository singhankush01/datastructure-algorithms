#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n,num,target;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    cin>>target;
    sort(v.begin(),v.end());
    int i =0, j = n-1;
    while(i<j)
    {
        if(v[i]+v[j]<target)
        {
            i++;
        }
        else if(v[i]+v[j]>target)
        {
            j--;
        }
        else{
            cout<<v[i]<<" "<<v[j];
            break;
        }

    }
    return 0;
}