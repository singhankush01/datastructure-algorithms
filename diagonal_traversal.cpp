#include<iostream>

using namespace std;

int main()
{
    int r,c,ar[100][100];
    cin>>r>>c;
    for(int i =0;i<r;i++)
    for(int j =0;j<c;j++)
    {
        cin>>ar[i][j];
    }
    int i=0,j=0;

    for(int k =0;k<r+c-1; k++)
    {
        int count = 0;
        cout<<ar[i][j]<<' ';
        while(count<k)
        {
            if(k&1)
            {
                i++;
                j--;
            }
            else
            {
                i--;
                j++;
            }
            cout<<ar[i][j]<<' ';
            count++;
        }
        if(k&1)
            i++;
        else
            j++;
    }
    return 0;
}