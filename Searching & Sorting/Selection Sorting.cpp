/*

1.Selection Sorting
2.Worst case time complexity -: O(N*N)
3.Stable -: No

*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,n,index;
	cout<<"Enter Size Of Array -: ";
	cin>>n;
	int arr[n];
    cout<<"\nEnter Elements in array -: ";
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nOrignal Array -: ";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

	cout<<"\nStep By Step Sorting Process -: \n\n";

    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        index = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[index], arr[i]);

        // Printing the operation done on this iteration

        for(j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }

        cout<<"\n";
    }

	cout <<"\nSorted array: ";
	for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
	return 0;
}
