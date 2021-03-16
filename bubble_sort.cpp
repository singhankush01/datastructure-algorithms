#include<iostream>
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

    for(int i=v.size()-1;i>1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(v[j]>v[j+1])
            {
                v[j] = v[j]+ v[j+1];
                v[j+1] = v[j] - v[j+1];
                v[j] = v[j] - v[j+1];
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
