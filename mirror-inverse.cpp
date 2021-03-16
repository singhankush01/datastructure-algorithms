/*In the sample case, arr1=[4,0,2,1,3],arr2=[1,3,2,4,0]. 
Inverse of arr1=[1,3,2,4,0] which is equal to arr2.
Therefore, arr2 is inverse of arr1 .Hence, ans is true.*/

#include <iostream>
using namespace std;
int main() {
    int n,ar1[100000],ar2[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ar2[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar2[ar1[i]] != i)
        {
            cout<<"NO!";
            return 0;
        }
    }
    cout<<"YES!";
    return 0;
}
