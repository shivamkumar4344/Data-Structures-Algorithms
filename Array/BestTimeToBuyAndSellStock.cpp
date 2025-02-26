#include<bits/stdc++.h>
using namespace std;

int buyAndSell(vector<int>& prices)
{
    int n = prices.size();
    int buyPrice = prices[0];
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(buyPrice > prices[i])
        {
            buyPrice = prices[i];
        }

        profit = max(profit,prices[i]-buyPrice);
    }
    return profit;
}

int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    cout<<"Maximum profit : "<<buyAndSell(arr)<<endl;
    return 0;
}