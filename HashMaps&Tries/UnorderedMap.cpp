#include<bits/stdc++.h>
using namespace std;

void countChars(unordered_map<char,int>& mp,string str)
{
    for(char it:str){
        mp[it]++;
    }
}

void countNumbers(unordered_map<int,int>& mp,vector<int> arr){
    for(int it:arr)
    {
        mp[it]++;
    }
}


int main()
{
    unordered_map<char,int> mp;
    string str = "shivamyadav";
    countChars(mp,str);

    for(auto it:mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    cout<<endl;
    unordered_map<int,int> mp1;
    vector<int> ans;
    vector<int> arr = {1,2,3,4,5,1,2};
    countNumbers(mp1,arr);
    for(auto i:mp1){
       if(i.second%2 != 0)
       {
            cout<<i.first<<" ";
       }
    }
    return 0;
}