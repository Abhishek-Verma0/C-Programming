// C++ implementation of left rotation of
// an array K number of times
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

// Function to leftRotate array multiple times
void leftRotate(int arr[], int n, int k)
{
	/* To get the starting point of rotated array */
	int mod = k % n;

	// Prints the rotated array from start position
	for (int i = 0; i < n; i++)
		cout << (arr[(mod + i) % n]) << " ";

	cout << "\n";
}

// Driver Code
int main()
{
	int n,t,k;
    cin>>t;

	for (int i = 0; i < t; i++)
    {
    cin>>n>>k;
	int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        leftRotate(arr, n, k);
    }
	return 0;
}
