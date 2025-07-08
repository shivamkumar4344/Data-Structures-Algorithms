#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        double fees;
    public:
        string name;
        int age;
        string dept;

        void setFees(double f)
        {
            fees = f;
        }

        double getFees()
        {
            return fees;
        }

        void changeDept(string d)
        {
            dept = d;
        }

        void getDept(){
            cout<<dept<<" ";
        }
};

int main()
{
    Student s;
    s.name = "Shivam";
    // cout<<s.name<<endl;
    s.setFees(94000);
    cout<<s.getFees()<<endl;
    s.dept = "BTech CSE";
    s.getDept();
    s.changeDept("Automation");
    s.getDept();
    return 0;
}
