#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int m,n;
    int ar[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    int max  = INT_MIN,column;
    for(int i=0;i<m;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum+=ar[i][j];
        }
        if(sum>max)
        {
            max = sum;
            column = i;
        }
    }
    cout<<"Maximum Column:"<<column<<endl;
    cout<<"Sum :"<<max;
    return 0;
}