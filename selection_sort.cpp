#include <iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;
int main() {
    vector<int> v;
    string buffer;
    int data;
    getline(cin, buffer);
    istringstream iss(buffer);
    while (iss >> data)
       v.push_back(data);
    int temp,n = v.size();
    for(int i=0;i<n-1;i++)
    {
        int max = i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]>v[max])
            {
                max = j;
            }
        }
        temp = v[max];
        v[max] = v[i];
        v[i] = temp;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
