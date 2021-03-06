/*rotate array by 90deg anticlockwise*/

#include <iostream> 
using namespace std;

int main() 
{ 

	int n,ar[100][100];
    cin>>n;
    for(int  i=0;i<n;i++)
    for(int j=0;j<n;j++)
        cin>>ar[i][j];

    for (int x = 0; x < n / 2; x++) { 
		for (int y = x; y < n - x - 1; y++) { 
			int temp = ar[x][y]; 

			ar[x][y] = ar[y][n - 1 - x]; 

			ar[y][n - 1 - x] 
				= ar[n - 1 - x][n - 1 - y]; 

			ar[n - 1 - x][n - 1 - y] 
				= ar[n - 1 - y][x]; 

			ar[n - 1 - y][x] = temp; 
		} 
	}
    for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) 
			cout<<ar[i][j]<<' '; 
        cout<<endl;
    }

	return 0; 
} 