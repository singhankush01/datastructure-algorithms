#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int num,largest = 0,flag = 0;
    for(int i=0;i<s.length();i++)
    {
        num = 0;
        flag = 0;
        while(s[i]>48 and s[i]<59){
            num= num*10 + s[i]-48; //subtracted 48 becoz ascii of 0 is 48, 1 is 49, 2 is 50 .....
            if(s[i]==58)
            {
                flag =1;
            }
            i++;
        }
        if(!flag)
        {
            if(num>largest)
            {
                largest = num;
            }
        }
    }
    cout<<"Sum: "<<largest;
    return 0;
}