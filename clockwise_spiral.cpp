	#include<iostream>
	using namespace std;
	
	int main()
	{
	    int r,c,ar[100][100];
	    
	    cin>>r>>c;
	    for(int i=0;i<r;i++)
	    for(int j=0;j<c;j++)
	        cin>>ar[i][j];
	
	int sr = 0, sc = 0, er = r - 1, ec = c - 1;

	while (sr <= er and sc <= ec) {

		for (int j = sc ; j <= ec ; j++) {
			cout << ar[sr][j] << ", ";
		}
		sr++;

		for (int i = sr ; i <= er ; i++) {
			cout << ar[i][ec] << ", ";
		}
		ec--;

		if (sr <= er) {
			for (int i = ec ; i >= sc ; i--) {
				cout << ar[er][i] << ", ";
			}
			er--;
		}

		if (sc < ec) {
			for (int i = er ; i >= sr ; i--) {
				cout << ar[i][sc] << ", ";
			}
			sc++;
		}
	}
	cout << "END";
	return 0;
	}
