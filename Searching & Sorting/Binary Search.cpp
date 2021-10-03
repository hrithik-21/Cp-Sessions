/*
1.Time Complexity - O(log N)
2.Binary search will only work when array elements are sorted.
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,n,x;
	cout<<"Enter Size Of Array -: ";
	cin>>n;
	int arr[n];
    cout<<"\nEnter Elements in array -: ";
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nOrignal Array -:";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter element to be search -: ";
    cin>>x;

    int low = 0,high=n-1,mid;

    bool found = false;

    while(low<=high)
    {
        //Calculating middle index
        //We are not using " mid = (low+high)/2 " it fails if the sum of low and high is greater than the maximum positive int value(2^31 – 1 ).

        mid=low+(high-low)/2;

        //if x is greater then we ignore left half of array.
        if(arr[mid]<x)
        {
            low=mid+1;
        }

        //if x is smaller then we ignore right half of array.
        else if(arr[mid]>x)
        {
            high=mid-1;
        }

        //Element is found at index mid.
        else
        {
            found =true;
            break;
        }
    }

    if(found==true)
    {
        cout<<"\nElement "<<x<<" is found at index "<<mid;
    }
    else
    {
        cout<<"\nElement Not Found";
    }

	return 0;
}
