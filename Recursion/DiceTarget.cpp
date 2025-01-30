#include<bits/stdc++.h>
using namespace std;

int diceTarget(int target){
    if(target == 0)
    {
        return 1;
    }
    if(target < 0)
    {
        return 0;
    }

    int ans = 0;
    for(int i=1;i<=6;i++)
    {
        ans = ans + diceTarget(target-i);
    }
    return ans;
}

int main()
{
    int target = 10;
    cout<<diceTarget(target)<<endl;
    return 0;
}