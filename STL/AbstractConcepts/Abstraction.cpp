#include<iostream>
using namespace std;

class Abstraction{
    private:
        int num;char ch;
    public:
        void setValues(int n,char c)
        {
            num = n;
            ch = c;
        }
    public:
        void print(){
            cout<<"Number is "<<num<<endl;
            cout<<"Character is "<<ch<<endl;
        }
};



int main(){

    Abstraction obj;
    obj.setValues(100,'A');
    obj.print();

    return 0;
}