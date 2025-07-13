#include<bits/stdc++.h>
using namespace std;

class Print{
    public:
        // int x;
        // char ch;
    void show(int x){
        cout<<"int: "<<x<<endl;
    }

    void show(char ch){
        cout<<"char: "<<ch<<endl;
    }
};

int main()
{
    Print p1,p2;
    p1.show(121);
    p2.show('x');
    return 0;
}