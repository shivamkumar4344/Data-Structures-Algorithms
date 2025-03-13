#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> mp;
    //ways of making a pair in cpp
    pair<string,int> p = make_pair("Raman",29);
    pair<string,int>q("Samir",24);
    pair<string,int>r;
    r.first = "Akash";
    r.second = 25;
    pair<string,int>s = {"Kunal",23};
    //insertion
    mp.insert(p);
    mp.insert(q);
    mp.insert(r);
    mp.insert(s);
    //size
    cout<<mp.size()<<endl;

    //access
    cout<<mp.at("Akash")<<endl;
    cout<<mp["Kunal"]<<endl;

    //count - check wheter present or not
    cout<<mp.count("Raman")<<endl;//true - 1
    cout<<mp.count("Deep")<<endl;//false - 0
    mp["Shivam"] = 21;
    //seraching
    //1 2 3 4
    if(mp.find("Shivam") != mp.end())
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
