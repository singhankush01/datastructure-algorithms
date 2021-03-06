/*print the array diagonally*/

#include <iostream>
using namespace std;
int main() {
    int m,n,matrix[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
        cin>>matrix[i][j];
    int r=0,c=0;
    for (int i = 0; i < m*n; i++) {
        cout<< matrix[r][c]<<' ';
        if ((r + c) % 2 == 0) {
            if (c == n - 1) {
                r++;
            } else if (r == 0) {
                c++;
            } else {
                r--;
                c++;
            }
        } else {
            if (r == m - 1) {
                c++;
            } else if (c == 0) {
                r++;
            } else {
                r++;
                c--;
            }
        }
    }
    return 0;
}
