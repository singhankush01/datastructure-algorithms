/*Given a string you need to print all possible strings 
that can be made by placing spaces (zero or one) in between them.
*/
#include<iostream>
#include<vector>
using namespace std;

void generateSpaceSubsets(char* inp,char* out, int i,int j)
{
    //base case
    if(inp[i] == '\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    //recursive case
    //add a space
    out[j] = ' ';
    out[j+1] = inp[i];
    generateSpaceSubsets(inp,out,i+1,j+2);

    //donot add a space
    out[j] = inp[i];
    generateSpaceSubsets(inp,out,i+1,j+1);
}
int main()
{
    char inp[10];
    cin>>inp;
    char out[20];
    out[0] = inp[0];
    generateSpaceSubsets(inp, out,1,1);
    return 0;
}