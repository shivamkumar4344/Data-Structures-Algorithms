//Array 3

#include<bits/stdc++.h>
using namespace std;


//row wise
//int main(){
//	int arr[3][2] = {{1,2},{3,4},{5,6}};
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<2;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//column wise

//void coloumnWise(int arr[][2] , int row ,int col){
//	for(int i=0;i<col;i++)
//	{
//		for(int j=0;j<row;j++)
//		{
//			cout<<arr[j][i]<<" ";
//		}
//		cout<<endl;
//	}
//}
//
//
//int main()
//{
//	int arr[3][2] = {{1,2},{3,4},{5,6}};
//	coloumnWise(arr,3,2);
//	return 0;
//	
//}

//linear search in 2D array

//bool linearSearch(int arr[][2] ,int row ,int col,int target)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++){
//			if(target == arr[i][j]){
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int arr[3][2] = {{1,2},{3,4},{5,6}};
//	bool found = linearSearch(arr,3,2,90);
//	if(found){
//		cout<<"Found"<<endl;
//	}
//	else{
//		cout<<"Not found"<<endl;
//	}
//	return 0;
//}


//row wise sum

//void rowWiseSum(int arr[][2],int row,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		int sum = 0;
//		for(int j=0;j<col;j++)
//		{
//			sum = sum + arr[i][j];
//		}
//		cout<<sum<<endl;
//	}
//}

//coloumn wise
//void colWiseSum(int arr[][2],int row,int col)
//{
//	for(int i=0;i<col;i++)
//	{
//		int sum = 0;
//		for(int j=0;j<row;j++)
//		{
//			sum = sum + arr[j][i];
//		}
//		cout<<sum<<endl;
//	}
//}

//void diagonalSum(int arr[][3] , int row ){
//	int sum = 0;
//	for(int i=0;i<row;i++)
//	{
//		sum+=arr[i][i];
//	}
//	cout<<sum<<endl;
//}

//void transpose(int arr[][3],int row ,int col)
//{
//	for(int i=0;i<row;i++)
//	{
//		for(int j=i;j<col;j++)
//		{
//			swap(arr[i][j],arr[j][i]);
//		}
//	}
//}
//
//void printArr(int arr[][3],int row,int col)
//{
//		for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}

//int main()
//{
//	int arr[3][3] = {{1,2,7},{3,4,8},{5,6,9}};
////	rowWiseSum(arr,3,2);
////	colWiseSum(arr,3,2);
////	diagonalSum(arr,3);
//	transpose(arr,3,3);
//	printArr(arr,3,3);
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	cout<<v.size();
//	return 0;
//}

//2d array by vector
//int main()
//{
//	vector< vector<int> > arr( 5 ,vector<int>(10,0));
//	for(int i=0;i<arr.size();i++)
//	{
//		for(int j=0;j<arr[i].size();j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}cout<<endl;
//	}
//}
