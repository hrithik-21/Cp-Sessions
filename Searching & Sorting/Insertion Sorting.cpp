/*

1.Insertion Sorting
2.Worst case time complexity -: O(N*N)
3.Stable -: Yes
4.Uses -: Insertion sort is used when number of elements is small.
          It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.

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

    for (i = 1; i < n; i++)
    {
        index = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > index)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = index;


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
