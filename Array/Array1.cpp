//array1
#include<bits/stdc++.h>
using namespace std;
//int main()
//{
//	int a = 5;
//	cout<<"Address of a : "<<&a<<endl;
//	int arr[10];
//	cout<<"Address of arr is : "<<&arr<<endl;
//	
//	return 0;
//}


//take array as input and then print it by doubling the value
//int main()
//{
//	int arr[10];
//	cout<<"Enter array values: "<<endl;
//	for(int i=0;i<10;i++){
//		cin>>arr[i];
//	}
//	
//	cout<<"Array after doubling it: "<<endl;
//	for(int i=0;i<10;i++)
//	{
//		cout<<arr[i]*2<<" ";
//	}
//	
//	return 0;
//}


//Linear search 

//int linearSearch(int arr[],int target,int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]==target){
//			return i;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[5] = {23,454,90,8,75};
//	cout<<"Element found at index : "<<linearSearch(arr,8,5)<<endl;
//	return 0;
//}



//int main()
//{
//	int arr[] = {23,67,4,6,2,11,90};
//	int minAns = INT_MAX;
//	for(int i=0;i<7;i++)
//	{
//		if(arr[i]<minAns)
//		{
//			minAns = arr[i];
//		}
//	}
//	cout<<"Mininum num: "<<minAns<<endl;
//	return 0;
//}

//Reversing the array
//int main()
//{
//	int arr[5] = {10,20,30,40,50};
//	int j = 4;
//	int i = 0;
//	while(i<=j){
//		swap(arr[i],arr[j]);
//		j--;
//		i++;
//}
//	
//	for(int i=0;i<5;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}


//print extreme of an array
//int main()
//{
//	int arr[6] = {10,20,30,40,50,60};
//	int left = 0;
//	int right = 5;
//	while(left<=right)
//	{
//		if(left==right)
//		{
//			cout<<arr[left]<<" ";
//		}
//		else{
//		cout<<arr[left]<<" "<<arr[right]<<" ";
//	}
//		left++;
//		right--;
//	}
//	return 0;
//}


//Reference variable

//int main()
//{
//	int n = 10;
//	int &k = n;
//	int &c = n;
//	cout<<"n: "<<n<<endl;
//	cout<<"k: "<<k<<endl;
//	cout<<"c: "<<c<<endl;
//	
//	k++;//11
//	c++;//12
//	cout<<"n: "<<n<<endl;
//	cout<<"k: "<<k<<endl;
//	cout<<"c: "<<c<<endl;
//	return 0;
//}

//call by value
//int increm(int n)
//{
//	n = n+1;
//	return n;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	cout<<"n: "<<increm(n)<<endl;
//	return 0;
//}


//call by reference
void increm(int&n){
	n++;
}

int main()
{
	int n;
	cin>>n;
	increm(n);
	cout<<"n: "<<n<<endl;
	return 0;
}

