#include<bits/stdc++.h>
using namespace std;

int gcd(int a ,int b)
{
    if(a==0) return b;
    
    if(b==0) return a;

    while(a>0 && b>0)
    {
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }

    return a==0 ? b:a;
}

int lcm(int a,int b)
{
    int mul = a*b;
    int ans = mul/gcd(a,b);
    return ans;
}

int main()
{
    int a = 12;
    int b = 5;
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;

    cout<<"LCM of "<<a<<" and "<<b<<" is : "<<lcm(a,b)<<endl;


}