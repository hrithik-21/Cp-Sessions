/*

1.Bubble Sorting
2.Worst case time complexity -: O(N*N)
3.Stable -: Yes

When array is already sorted then it takes O(N) time.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,n;
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

	cout<<"\n";

	bool swapped;

	cout<<"\nStep By Step Sorting Process -: \n\n";


    for (i = 0; i < n-1; i++)
    {
        swapped = false;

        //Last i elements of array are sorted

        for (j = 0; j < n-i-1; j++)
        {
            //Comparing adjacent elements

            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        // Printing the operation done on this iteration

        for(j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }

        cout<<"\n";

        // If no elements is swapped then array is already sorted.

        if (swapped == false)
            break;
    }
	cout <<"\nSorted array: ";
	for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
	return 0;
}

