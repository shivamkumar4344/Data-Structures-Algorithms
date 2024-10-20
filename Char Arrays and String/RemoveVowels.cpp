#include<bits/stdc++.h>
using namespace std;

string removeVowels(string str)
{
    string ans="";
    for(auto ch:str)
    {
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U' ){
            ans+=ch;
        }
    }
    return ans;
}

int main()
{
    string str;
    getline(cin,str);


    string result = removeVowels(str);
    cout<<result<<endl;

    return 0;
}