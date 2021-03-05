#include<iostream>

using namespace std;

int main()
{
    int n,m,ar[100][100];   //m=numbers of rows, n = number of columns
    cin>>m>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        cin>>ar[i][j];
    int factor =-1,j=0;
    for(int i =0;i<n;i++)
    {
        factor *= -1;
        while (j<m and j>=0)
        {
            cout<<ar[j][i]<<' ';
            j+=factor;
        }
        j-=factor;
        
    }
    return 0;
}