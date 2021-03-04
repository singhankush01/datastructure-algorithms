/*Sonu and Titu have two Strings. They want to make their strings anagrams
of each other. They can either delete a character from string of Titu or 
add a character to the string of Sonu. Find the minimum number of 
operations required to make the strings anagrams of each other.*/

#include<iostream>
using namespace std;

int main()
{
    char sonu[100005],titu[100005];
    int ans;
    cin.getline(sonu,100005);
    cin.getline(titu,100005);
    int ar[26] = {0};
    for(int i=0;sonu[i]!='\0';i++)
    {
        ar[sonu[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        ar[titu[i]-'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(ar[i]>0)
        {
            ans+=ar[i];
        }
        else
        {
            ans-=ar[i];
        }
    }
    cout<<ans;
    return 0;
}