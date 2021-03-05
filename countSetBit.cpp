/*count number of set bits and unset bits in the binary of the given number
setbit is the 1's in binary*/
#include<iostream>

using namespace std;

int main()
{
    int n,countSet =0,countUnset =0;
    cin>>n;
    while(n!=0)
    {
        if(n&1)
            countSet++;
        else    
            countUnset++;
        n = n>>1;
    }
    cout<<"Number of Set bits: ";
    cout<<countSet<<endl;
    cout<<"Number of UnSet bits: ";
    cout<<countUnset;
    return 0;
}