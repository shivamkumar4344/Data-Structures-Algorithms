//TC = O(logN)
#include<bits/stdc++.h>
using namespace std;

int fastExp(int a,int n)
{
    int ans = 1;
    while(n>0)
    {
        if(n % 2 != 0 ){ // or n&1
            ans = ans * a;
        }

        a = a * a;
        n = n/2; //or n>>=1
    }
    return ans; 
}

int main()
{
    int a = 2;
    int n = 3;
    cout<<fastExp(a,n)<<endl;
    return 0;
}