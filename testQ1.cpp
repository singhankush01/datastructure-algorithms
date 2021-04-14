#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int* arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  vector<int> even;
  vector<int> odd;

  for(int i=0;i<n;i++)
  {
    if(arr[i]%2 == 0){
      even.push_back(arr[i]);
    }
    else{
      odd.push_back(arr[i]);
    }
  }

  bool evenflag = false;
  if(arr[0]%2==0)
  {
    evenflag= true;
  } else{

  }
  int i=0;
  int j=0;

  for (int k = 0; k<n; k++)
  {
    if(evenflag){
      arr[k] = even[i++];
      evenflag = false;
    }
    else{
      arr[k] = odd[j++];
      evenflag = true;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
}