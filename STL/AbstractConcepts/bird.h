#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;

};

class sparrow: public Bird{
    public :
        void eat()
        {
            cout<<"Sparrow is eating";
        }
        void fly()
        {
            cout<<"Sparrow is flying";
        }
};

class eagle : public Bird{
    public:
    void eat(){
        cout<<"Eagle is eating\n";
    }
    void fly(){
        cout<<"Eagle is flying\n";
    }

};
#endif