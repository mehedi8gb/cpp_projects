#include<iostream>
using namespace std;

/* prints element and NGE pair
for all elements of arr[] of size n */


// Driver Code
int main()
{
	int arr[] = {11, 13, 21, 3};
	int next, i, j;

	int n = sizeof(arr)/sizeof(arr[0]);
	for (i = 0; i < n; i++)
	{
		next = -1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << " -- "
			<< next << endl;
	}
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)
