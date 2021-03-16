/* 1
   1 1
   1 2 1
   1 3 3 1
   1 4 6 4 1
   and so on*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ar[100][100];
    for(int i =0;i<=n;i++)
    {
        ar[i][i] = 1;
        ar[i][0] = 1;
    }

    for(int i= 1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            ar[i][j] = ar[i-1][j-1] + ar[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<=i;j++)
    {
        cout<<ar[i][j]<<' ';
    }
    cout<<endl;
    }
}
