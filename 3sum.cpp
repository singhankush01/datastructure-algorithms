#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,num;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    int i = 0,j=v.size();
    while(j-i>1)
    {


        // while(i<j)
        // {
        // if(v[i]+v[j]<target)
        // {
        //     i++;
        // }
        // else if(v[i]+v[j]>target)
        // {
        //     j--;
        // }
        // else{
        //     cout<<v[i]<<" "<<v[j];
        //     break;
        // }
        // }

    }
    return 0;
}