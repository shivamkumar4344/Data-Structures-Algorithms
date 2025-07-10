#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name = name;
            this->age = age;
        }

        // Person(){
        //     cout<<"Parent class constructor"<<endl;
        // }
        // ~Person(){
        //     cout<<"Parent class destructor.."<<endl;
        // }
};

class Child : public Person{
    public:
        int rollNo;
        Child(string name , int age, int rollNo):Person(name,age){
            this->rollNo = rollNo;
        }

        // Child(){
        //     cout<<"Child class constructor.."<<endl;
        // }

        // ~Child(){
        //     cout<<"Child class destructor.."<<endl;
        // }

        void getInfo()
        {
            cout<<"Name : "<<name<<" Age is : "<<age<<" Roll is "<<rollNo<<endl;
        }
};


int main()
{
    Child c1("Rahul",21,9089);
    c1.getInfo();
    return 0;
}