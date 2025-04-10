/*LC - 28. Find the Index of the First Occurrence in a String
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.*/
#include<bits/stdc++.h>
using namespace std;

int indexFirst(string& big,string& small)
{
    int n = big.length();
    int m = small.length();

    for(int i=0;i<=n-m;i++)
    {
        if(big.substr(i,m) == small)
            return i;
    }
    return -1;
}

int main()
{
    string big = "butsad";
    string small = "sad";
    cout<<"Answer is : "<<indexFirst(big,small)<<endl;
    return 0;
}