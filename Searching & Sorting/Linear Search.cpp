//1.Time Complexity - O(N)


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

    bool found = false;

    for (i = 0; i < n; i++)
    {
        //If x is found then loop get terminated

        if(arr[i]==x)
        {
            found=true;
            break;
        }
    }

    if(found==true)
    {
        cout<<"\nElement "<<x<<" is found at index "<<i;
    }
    else
    {
        cout<<"\nElement Not Found";
    }

	return 0;
}
