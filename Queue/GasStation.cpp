#include <bits/stdc++.h>
using namespace std;

// Leetcode - 134
// There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

// You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

// Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.


//Best Time Complexity Approach
int gasStation(vector<int> &gas, vector<int> &cost)
{
    int n = gas.size();
    int totalCost = 0;
    int totalGas = 0;
    for (int i = 0; i < n; i++)
    {
        totalCost += cost[i];
        totalGas += gas[i];
    }

    if (totalCost > totalGas )
        return -1;

    int bal = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        bal += gas[i] - cost[i];
        if (bal < 0)
        {
            bal = 0;
            s = i + 1;
        }
    }
    return s;
}

//Second Approach

int gasStation2(vector<int> &gas, vector<int> &cost)
{
    int balance = 0;
    int deficit = 0;
    int start = 0;

    for(int i=0;i<gas.size();i++)
    {
        balance += gas[i] - cost[i];
        if(balance < 0)
        {
            deficit += abs(balance);
            balance = 0;
            start = i+1;
        }
    }

    if(balance - deficit >= 0)
    {
        return start;
    }
    else{
        return -1;
    }
}

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    int ans = gasStation2(gas, cost);
    cout << "Final Answer : " << ans << endl;

    return 0;
}