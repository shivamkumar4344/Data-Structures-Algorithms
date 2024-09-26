#include<iostream>
using namespace std;

// int binarySearch(int arr[],int n ,int target)
// {
// 	int start = 0;
// 	int end = n-1;
// 	int mid = end + ((start -end)/2);

// 	while(start <= end)
// 	{
// 		if(arr[mid]== target)
// 		{
// 			return mid;
// 		}

// 		else if(target > arr[mid])
// 		{
// 			start = mid+1;
// 		}

// 		else{
// 			end = mid - 1;
// 		}
// 		mid = end + ((start -end)/2);
// 	}
// 	return -1;
// }

int firstOcc(int arr[], int n,int target)
{
	int s = 0;
	int e = n-1;
	int mid = e+((s-e)/2);
	int ans = -1;
	while(s<=e)
	{
		if(arr[mid] == target)
		{
			ans = mid;
			e = mid - 1;
		}

		else if(target > arr[mid])
		{
			s = mid + 1;
		}

		else if(target < arr[mid]){
			e = mid-1 ;
		}

		mid = e+((s-e)/2);
	}
	return ans;
}

int lastOcc(int arr[], int n,int target)
{
	int s = 0;
	int e = n-1;
	int mid = e+((s-e)/2);
	int ans = -1;
	while(s<=e)
	{
		if(arr[mid] == target)
		{
			ans = mid;
			s = mid + 1;
		}

		else if(target > arr[mid])
		{
			s = mid + 1;
		}

		else if(target < arr[mid]){
			e = mid-1 ;
		}

		mid = e+((s-e)/2);
	}
	return ans;
}

int totalOccur(int arr[],int n,int target)
{
	int f = firstOcc(arr,n,target);
	int l = lastOcc(arr,n,target);

	int total = l - f + 1;
	return total; 
}

int main()
{
	int arr[] = {10,20,30,30,30,30,50,60};
	int n = 8;

	// int ans = firstOcc(arr,n,30);
	int total = totalOccur(arr,n,30);

	cout<<"Total occurences is "<<total<<endl;
	
	return 0;
}
