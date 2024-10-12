#include<bits/stdc++.h>
using namespace std;

int minTime(vector<string>& garbage ,vector<int>& travel)
{
    int pickP = 0;
    int pickG = 0;
    int pickM = 0;

    int travelP = 0;
    int travelG = 0;
    int travelM = 0;

    int lastP = 0;
    int lastG = 0;
    int lastM = 0;

    for(int i=0 ; i<garbage.size() ;i++)
    {
        string curr = garbage[i];
        for(int j = 0;j<curr.length();j++)
        {
            if(curr[j] == 'P'){
                pickP++;
                lastP = i;
            }
            else if(curr[j] == 'G'){
                pickG++;
                lastG = i;
            }
            else if(curr[j] == 'M'){
                pickM++;
                lastM = i;
            }
        }
    }


    for(int i=0 ; i<lastP ; i++){
        travelP += travel[i];
    }
    for(int i=0 ; i<lastG ; i++){
        travelG += travel[i];
    }
    for(int i=0 ; i<lastM ; i++){
        travelM += travel[i];
    }

    int ans = (pickP+travelP) + (pickG+travelG) + (pickM+travelM);
    return ans;

}




int main()
{
    vector<string> garbage = {"G","P","GP","GG"};
    vector<int> travel = {2,4,3};

    cout<<"Minimum time to collect the garbage: "<<minTime(garbage,travel)<<endl;

    return 0;
}