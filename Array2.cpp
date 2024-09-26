//1.Find unique element
#include<bits/stdc++.h>
using namespace std;

//int uniqueEle(int arr[] , int n)
//{
//	int ans = 0;
//	for(int i=0;i<n;i++)
//	{
//		ans = ans ^ arr[i];
//	}
//	return ans;
//}
//
//int main()
//{
//	int arr[] = {10,12,11,10,12,9,65,9,65};
//	int ans = uniqueEle(arr,9);
//	cout<<"Ans is : "<<ans<<endl;
//	return 0;
//	
//}


//int main()
//{
//	int arr[3] = {10,20,30};
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++){
//			cout<<arr[i]<<","<<arr[j]<<endl;
//		}
//	}
//	return 0;
//}

//sort 0's and 1's

//void sortZero(int arr[],int n)
//{
//	int zC = 0;
//	int oC = 0;
//	for(int i=0;i<n;i++)
//	{
//		if(arr[i]==0){
//			zC++;
//		}
//		if(arr[i]==1)
//		{
//			oC++;
//		}
//	}
//	int index = 0;
//	while(zC--){
//		arr[index] = 0;
//		index++;
//	}
//	
//	while(oC--){
//		arr[index] = 1;
//		index++;
//	}
//	
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	
//}



//shift elements by right 
//void rightShift(int arr[] ,int n)
//{
//	int temp = arr[n-1];
//	
//	for(int i =n-1;i>=0;i--){
//		arr[i] = arr[i-1];
//	}
//	arr[0] = temp;
//	
//}
//
//
//
//
//
//int main()
//{
//	int arr[] = {10,20,30,40,50,60};
//	rightShift(arr,6);
//	
//	
//	for(int i=0;i<6;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//	
//
//}
