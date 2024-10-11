#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    //str.length()
    cout<<"Length of string is : "<<str.length()<<endl;
    //str.empty()-> gives 1 for true and 1 for false
    cout<<"Is string empty or not: "<<str.empty()<<endl;

    // str.at()
    cout<<"character position at 0 : "<<str[0]<<endl; 

    //str.front()
    cout<<"Front character: "<<str.front()<<endl;
    // str.back()
    cout<<"Last character: "<<str.back()<<endl;
    string str2 = " Yadav";
    //str.append()-> combine two strings.
    str.append(str2);
    cout<<"After appending: "<<str<<endl;

    //str.erase(index,no of characters)
    string stri1 = "This is a car";
    stri1.erase(4,3);
    cout<<"After erasing : "<<stri1<<endl;

    //str.insert(index,string to be inserted)
    string stri2 = "Shivam Yadav";
    string stri3 = " Kumar";
    stri2.insert(6,stri3);
    cout<<"After inserting: "<<stri2<<endl;

    stri3.push_back('R');
    cout<<stri3<<endl;
    stri3.pop_back();
    cout<<stri3<<endl;
    
    // str.find(str2) -> returns the first encounterd string's index
    cout<<stri2.find(stri3)<<endl;

    //desc.substr(index,no of characters you want)
    string desc = "this is a car";
    string out = desc.substr(5,2);
    cout<<"output : "<<out<<endl;

    return 0;
}