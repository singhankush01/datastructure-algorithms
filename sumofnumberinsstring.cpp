#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    string s;
    getline(cin,s,'\n');
    long long int num,largest = 0,sum = 0;
    for(int i=0;i<s.length();i++)
    {
        num = 0;
        //flag = 0;
        while(i<s.length() && s[i]>=48 && s[i]<59){
            num= num*10 + s[i]-48; //subtracted 48 becoz ascii of 0 is 48, 1 is 49, 2 is 50 .....
            // if(s[i]==58)
            // {
            //     flag =1;
            // }
            i++;
        }
        sum+=num;
        // if(!flag)
        // {
        //     if(num>largest)
        //     {
        //         largest = num;
        //     }
        // }
    }
    cout<<sum<<endl;
    }
    return 0;
}