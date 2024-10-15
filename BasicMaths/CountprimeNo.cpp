//sieve of erarothness
#include<bits/stdc++.h>

using namespace std;
//optimal approach in TC = O(n*(log(log n)))

int countPrimes(int n)
{
    if(n==0 || n==1) return 0;

    vector<bool> prime(n,true);

    int count = 0;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;

            int j = 2*i;
            while(j<n)
            {
                prime[j] = false;
                j+=i;
            }
        }

    }
    return count;
}


int main(){
    int n = 10;
    cout<<"Number of prime numbers from 0 to "<<n<<" is: "<<countPrimes(n)<<endl;
}