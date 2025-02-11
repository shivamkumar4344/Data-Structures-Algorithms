#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_front(60);
    dq.push_front(70);
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;

    
    
    return 0;
}
