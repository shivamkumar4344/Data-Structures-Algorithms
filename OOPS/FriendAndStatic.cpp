#include<iostream>
using namespace std;

// static keyword

// void func()
// {
//     static int x=0;
//     cout<<"x : "<<x<<endl;
//     x++;
// }


// int main()
// {
//     func();func();func();
//     return 0;
// }

// friend function - it can access private members or functions of a class.

// class Parent{
//     private:
//         int x;
//     public:
//         Parent(int y){
//             x = y;
//         }

//     friend void print(Parent &p);

// };

// void print(Parent &obj)
// {
//     cout<<obj.x<<endl;
// }

// int main()
// {
//     Parent p1(5);
//     print(p1);
//     return 0;
// }

class A{
    private:
        int x;
    public:
        void setX(int val) { x = val; }
        void show(){
            cout<<"x: "<<x<<endl;
        }
        friend void show(A &obj);
};

void show(A &obj) {
    cout << "Friend function, x: " << obj.x << endl;
}

int main()
{
    A obj;
    obj.setX(123); // Use setter to assign private member
    obj.show();
    show(obj); // Call friend function
    return 0;
}