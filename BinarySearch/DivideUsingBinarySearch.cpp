#include<bits/stdc++.h>
using namespace std;

int Quotient(int divisor,int dividend)
{
    int s = 0;
    int e = dividend;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(mid*divisor == dividend)
        {
            return mid;
        }
        if(mid*divisor < dividend)
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e= mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int divisor = 7;
    int dividend = 28;

    int ans = Quotient(divisor,dividend);
    cout<<"Ans is : "<<ans<<endl;
    return 0;
}