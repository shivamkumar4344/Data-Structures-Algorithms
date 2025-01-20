#include <iostream>
#include<vector>
using namespace std;

void subsequencesOfString(string str, string output, int index,vector<string>& ans)
{
    if (index >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclusion
    subsequencesOfString(str, output, index + 1,ans);
    char ch = str[index];
    // inclusion
    output.push_back(ch);
    subsequencesOfString(str, output, index + 1,ans);
}

int main()
{
    vector<string> ans;
    subsequencesOfString("abc", "", 0,ans);
    cout<<"Printing subsequences of a string : "<<endl;
    for(auto it:ans){
        cout<<"->"<<it<<endl;
    }
    return 0;
}