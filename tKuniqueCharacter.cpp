/*Given a string find the size of the longest possible substring that has exactly K unique characters.*/
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int countFreq(int *freq)
{
    int count =0;
    for(int i=0;i<26;i++)
    {
        if(freq[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    int freq[26]={0};
    int k,i=0,j=0,ans = -1;
    getline(cin,s);
    cin>>k; 
    while(s[j] !='\0')
    {
        freq[s[j]- 'a']++;
        if(countFreq(freq) == k)
        {
            int window_len = j-i +1;
            ans = max(ans,window_len);
        }
        else if(countFreq(freq)>k)
        {
            while(s[i]!= '\0' and countFreq(freq)>k)
            {
                freq[s[i] - 'a']--;
                i++;
            }
        }
        j++;
    }
    cout<<"Max Length: "<<ans<<endl;
}