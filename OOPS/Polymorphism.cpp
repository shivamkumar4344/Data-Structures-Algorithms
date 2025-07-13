#include<bits/stdc++.h>
using namespace std;

//function overloading - compile time

// class Print{
//     public:
//         // int x;
//         // char ch;
//     void show(int x){
//         cout<<"int: "<<x<<endl;
//     }

//     void show(char ch){
//         cout<<"char: "<<ch<<endl;
//     }
// };

// int main()
// {
//     Print p1,p2;
//     p1.show(121);
//     p2.show('x');
//     return 0;
// }

//constructor overloading - compile time

// class Student{
//     public:
//         string name;
//     Student(string name)
//     {
//         this->name = name;
//         cout<<"Parameterised constructor"<<endl;
//     }
//     Student(){
//         cout<<"non-parameterised "<<endl;
//     }
// };

// int main()
// {
//     Student s1("Shivam");
//     return 0;
// }


//overriding - run time

//  class Parent{
//     public:
//         void show()
//         {
//             cout<<"Parent class"<<endl;
//         }
//  };

//  class Child :public Parent{
//     public:
//         void show()
//         {
//             cout<<"Child class"<<endl;
//         }
//  };

//  int main()
//  {
//     Parent p1;//parent class had been overridden by child class
//     p1.show();
//     Child c1; // here child class had overridden parent class
//     c1.show();
//  }

//virtual functions

class Parent{
    public:
        virtual void show(){
            cout<<"Parent class"<<endl;
        }
};

class Child:public Parent{
    public:
        void show(){
            cout<<"Child class"<<endl;
        }
};

int main()
{
    Child c1;
    c1.show();
    Parent p1;
    p1.show();
    return 0;
}