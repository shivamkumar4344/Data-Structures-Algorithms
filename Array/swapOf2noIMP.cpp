#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int b = 91;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"After swapping without third varible:- "<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;

    return 0;

}