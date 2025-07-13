#include<bits/stdc++.h>
using namespace std;

class Shape{ // because of pure virtual function it automatically becomes abstract class.

    virtual void show() = 0; //pure virtual function
};

class Circle:public Shape{
    public:
        void show(){
            cout<<"shape is circle"<<endl;
        }
};

class Square:public Shape{
    public:
        void show(){
            cout<<"shape is sqaure"<<endl;
        }
};


int main()
{
    Circle c1;
    c1.show();
    Square s1;
    s1.show();
    return 0;   
} 
