#include<bits/stdc++.h>
using namespace std;
//Leetcode - 70
int climbingStairs(int n)
{
    if( n==0 || n==1 ){
        return 1;
    }

    int curr = 1; int prev = 1;
    for(int i=2;i<=n;i++){
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    return curr;
 }


int main()
{
    int n = 4;
    cout<<climbingStairs(n)<<endl;
    return 0;


}