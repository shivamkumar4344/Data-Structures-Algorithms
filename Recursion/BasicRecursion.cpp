#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int ans = n * factorial(n-1);
    return ans;
}

void printCounting(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    printCounting(n-1);
    cout<<n<<" ";
    
}

int pow2(int n){
    if(n == 0)
    {//base condition
        return 1;
    }

    return 2 * pow2(n-1);
}

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main()
{
    int n = 7;
    cout<<factorial(n)<<endl;
    printCounting(n);
    cout<<endl;
    cout<<pow2(n)<<endl;
    cout<<fibonacci(n)<<endl;   

    return 0;

}