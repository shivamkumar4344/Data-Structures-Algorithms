#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
        double balance;
    public:
        string name;
        int accNo;
        string type;

    //non- parameterised constructor
    // Account()
    // {
    //     cout<<"Non - Parameeterized called";
    // }

    //parameterized constructor
    Account(string name,int accNo,string type){
        this->name = name;
        this->accNo = accNo;
        this->type = type;
    }

    //customized copy constructor
    Account(Account &obj)
    {
        cout<<"I am under copy constructor"<<endl;
        this->name = obj.name;
        this->accNo = obj.accNo;
        this->type = obj.type;

    }

    void setBalance(double b)
    {   
        balance = b;
    }

    double getBalance()
    {
        return balance;
    }

    void getInfo()
    {
        cout<<"Name: "<<this->name<<" Account no. "<<this->accNo<<" type of account: "<<this->type<<" Balance : "<<getBalance()<<endl;
    }

};


int main()
{
    Account a1("Shivam Yadav",123456,"savings");
    a1.setBalance(20000);
    // a1.getInfo();

    //default copy constructor
    // Account b1(a1);
    // b1.getInfo();

    Account a2(a1); //custom copy constructor called.
    // a2.setBalance(20000);
    // a2.getInfo();



    
    return 0;
}