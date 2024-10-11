#include<bits/stdc++.h>
using namespace std;

string removeAdjacent(string s)
{
    string ans = "";
    int i = 0 ;
    while(i<s.length())
    {
        if(ans.length()>0 && ans[ans.length()-1]==s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;

}


int main()
{   
    string str = "azzxxy";
    cout<<removeAdjacent(str)<<endl;
    
    return 0;
}
