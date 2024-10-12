#include<bits/stdc++.h>
using namespace std;

int findingCount(string s,int i,int j)
{
    int count = 0;
    while(i>=0 && j<s.length() && s[i]==s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

void countSubstrings(string s)
{
    int total = 0;
    for(int i=0;i<s.length();i++)
    {
        int oddC = findingCount(s,i,i);
        int evenC = findingCount(s,i,i+1);
        total = total+oddC+evenC;
    }
    cout<<"Total subtrings are : "<<total<<endl;
}

int main()
{
    string str = "madam";
    string s = "aaa";
    countSubstrings(s);
    countSubstrings(str);
    return 0;
}