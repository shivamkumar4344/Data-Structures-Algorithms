#include<bits/stdc++.h>
using namespace std;

string removeAll(string str,string part)
{
    while(str.find(part) != string::npos)
    {
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main()
{
    string str = "abbcbaddcbabbbaac";
    string part = "cba";
    cout<<removeAll(str,part)<<endl;
    
    return 0;
}
