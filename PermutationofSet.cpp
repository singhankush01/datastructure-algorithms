#include "pch.h"
#include <iostream>
using namespace std;
void permu(int a[],int k, int n)
{
	int t;
	if (k == n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i]<<" ";
		}
		cout << endl;
	}
	else {
		for (int i = k; i < n; i++)
		{
			t = a[k]; a[k] = a[i]; a[i] = t;
			permu(a, k + 1, n);
			t = a[k]; a[k] = a[i]; a[i] = t;
		}
	}
}
int main()
{
	int a[3];
	a[0] = 0; a[1] = 1; a[2] = 2;
	int n = size(a);
	permu(a, 0, n);
}
