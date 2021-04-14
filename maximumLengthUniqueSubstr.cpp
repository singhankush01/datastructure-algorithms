#include<iostream>
using namespace std;

bool hasUniqueCharacters(d)

int main()
{
    string str;
    cin>>str;

    int n = str.length();
    int max_len = 0;

    for(int i=0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            if(hasUniqueCharacters(str,i,j))
            {
                int length = j-i+1;     //calculate the length of substring
                if(length>max_len)
                {
                    max_len = length;
                    left = i;
                    right = j;
                }
            }
        }
    }
    return 0;
}
