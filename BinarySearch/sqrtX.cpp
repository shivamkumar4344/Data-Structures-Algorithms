#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n = 98;
    float s = 0;
    float e = n;
    float ans = -1;
    float mid = e+(s-e)/2;
    while(s<=e)
    {
        if(mid*mid == n)
        {
            return mid;
        }
        else if(n> mid*mid)
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = e+(s-e)/2;
    }

    cout<<"Ans is : "<<fixed<<setprecision(3)<<ans<<endl;

    return 0;
}

