#include<iostream>
using namespace std;

bool isKthBitSet(unsigned int x, unsigned int k)
{
    return x&(1<<k);
}

bool isPalindrome(unsigned int x)
{
    unsigned int left = sizeof(unsigned int ) * 8 - 1;
    unsigned int right = 0;
    while(left>right)
    {
        if(isKthBitSet(x,left) != isKthBitSet(x,right))
        {
            return false;
        }
        left--;
        right++;
    }
    return true;
}

int main()
{
    unsigned int x;
    cin>>x;
    if(isPalindrome(x))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"N0"<<endl;
    }
    return 0;
}