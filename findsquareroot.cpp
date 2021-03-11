/* find square root of a number without using sqrt() operator*/
#include<iostream>

using namespace std;

int main()
{
    int n,start =n/2;
    cin>>n;
    while(start>0)
    {
        if(start*start<=n)
        {
            cout<<start;
            break;
        }
        else{
            start = start -1;
        }
    }
}