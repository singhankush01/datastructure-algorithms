/*Given an array of M x N elements (M rows, N columns), 
return all elements of the array in diagonal order.*/

#include<iostream>
using namespace std;
int main() {
	int r,c,ar[100][100];
	cin>>r>>c;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
		cin>>ar[i][j];
	int i=0,j=0,fact =1;
	while(i!=r-1 and j!=c-1)
	{
		while(i>=0 and i<c and j<r and j>=0)
		{
			cout<<ar[i][j];
			j=j-fact;
			i=i+fact;
		}
		if(i==r-1 and j==c-1)
			break;
		if(i<0)	i=i+fact;
		else if(i>r) i =i-fact;
		else if(j>c) j=j+fact;
		else j=j-fact;
		fact = fact*(-1);
	}
	return 0;
}