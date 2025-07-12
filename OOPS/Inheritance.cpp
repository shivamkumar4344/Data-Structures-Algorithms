#include<bits/stdc++.h>
using namespace std;

// class Person{
//     public:
//         string name;
//         int age;
//         Person(string name,int age)
//         {
//             this->name = name;
//             this->age = age;
//         }

//         // Person(){
//         //     cout<<"Parent class constructor"<<endl;
//         // }
//         // ~Person(){
//         //     cout<<"Parent class destructor.."<<endl;
//         // }
// };

// class Child : public Person{
//     public:
//         int rollNo;
//         Child(string name , int age, int rollNo):Person(name,age){
//             this->rollNo = rollNo;
//         }

//         // Child(){
//         //     cout<<"Child class constructor.."<<endl;
//         // }

//         // ~Child(){
//         //     cout<<"Child class destructor.."<<endl;
//         // }

//         void getInfo()
//         {
//             cout<<"Name : "<<name<<" Age is : "<<age<<" Roll is "<<rollNo<<endl;
//         }
// };

//multi - level inheritance

// class Person{
//     public:
//         string name;
//         int age;
// };

// class Student:public Person{
//     public:
//         int rollNo;
// };

// class GradStudent:public Student{
//     public:
//         string researchArea;
// };


// int main()
// {
//     // Child c1("Rahul",21,9089);
//     // c1.getInfo();

//     GradStudent g1;
//     g1.name = "Shivam Kumar";
//     g1.age = 22;
//     g1.rollNo = 12218903;
//     g1.researchArea = "Computer Science";
//     cout<<g1.name<<" "<<g1.age<<" "<<g1.rollNo<<" "<<g1.researchArea<<endl;
//     return 0;
// }

//multiple inheritance

// class Student{
//     public:
//         string name;
//         int roll;
// };

// class Teacher{
//     public:
//         double salary;
//         string subject;
// };

// class TA : public Student,public Teacher{
    
// };


// int main()
// {
//     TA t1;
//     t1.name = "Shivam";
//     t1.salary = 200000;
//     cout<<t1.name<<" "<<t1.salary<<endl;
// }


//Hierarchial inhertiance
class Person{
    public:
        int age;
        string name;
};

class Student:public Person{
    public:
        int rollNo;
};

class Teacher:public Person{
    public:
        string salary;
};

int main()
{
    Teacher t1;
    t1.name = "Ramesh";
    t1.age = 21;
    Student s1;
    s1.rollNo = 122;
    cout<<t1.name<<" "<<t1.age<<" "<<s1.rollNo<<endl;

    return 0;
}