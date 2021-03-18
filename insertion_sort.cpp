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
    int n = v.size();
    for(int i=1;i<n;i++)
    {
        data = v[i];
        int j = i-1;
        while(j>=0 && data < v[j])
        {
            v[j+1] = v[j];
            j--;
        }
        j++;
        v[j] = data;
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
