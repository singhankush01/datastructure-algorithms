#include <iostream>

using namespace std;

int getSingleElement(int arr[], int n)
{
	int ones = 0, twos = 0;
	int common_bit_mask;

	for (int i = 0; i < n; i++) {
		twos = twos | (ones & arr[i]);
		ones = ones ^ arr[i];
		common_bit_mask = ~(ones & twos);
		ones &= common_bit_mask;
		twos &= common_bit_mask;
	}

	return ones;
}

int main()
{
    int n,arr[100001];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
	cout << "The element with single occurrence is "<< getSingleElement(arr, n);
	return 0;
}

