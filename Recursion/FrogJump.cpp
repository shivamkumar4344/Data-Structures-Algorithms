#include<bits/stdc++.h>
using namespace std;

int noOfJumps(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int ans1 = noOfJumps(n-1);
    int ans2 = noOfJumps(n-2);
    return ans1+ans2;

}

int main()
{
    int n = 6;
    cout<<noOfJumps(n)<<endl;
    return 0;
}