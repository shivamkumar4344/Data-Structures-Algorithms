//Linear search :- O(n)
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the array:- ";
	cin>>n;
	cout<<"Enter the array elements:- ";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cout<<"Enter the target element:- ";
	cin>>target;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==target)
		{
			cout<<"Traget is found at index "<<i<<" .";
			break;
		}
	}
	
	return 0;
	
}
