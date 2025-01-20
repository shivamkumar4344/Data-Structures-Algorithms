#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// Should be done by DP otherwise it will cause TLE

int coinChange(vector<int> &coins, int amount)
{
    // base case
    if (amount == 0)
    {
        return 0;
    }

    int ans = INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];
        if (coin <= amount)
        {
            int recAns = coinChange(coins, amount - coin);
            if (recAns != INT_MAX)
            {
                ans = 1 + recAns;
            }
        }
        mini = min(mini, ans);
    }
    return ans;
}

int main()
{
    vector<int> coins = {6, 8, 5};
    int amount = 11;
    int ans = coinChange(coins, amount);
    if (ans == INT_MAX)
    {
        return -1;
    }
    else
    {
        cout << "Minimum number of coins to reach amount : " << ans << endl;
        return 0;
    }
}
