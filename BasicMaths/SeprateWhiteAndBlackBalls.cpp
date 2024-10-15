#include<bits/stdc++.h>

using namespace std;

int NumSwaps(string s){
    int black = 0;
    int ans = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0'){
            ans += black;
        }
        else{
            black++;
        }
    }
    return ans;
}


int main()
{
    string s = "1100";
    cout<<"Number of Swaps: "<<NumSwaps(s)<<endl;
    return 0;
}