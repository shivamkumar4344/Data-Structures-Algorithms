#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> st;

    // put all elements of queue in stack
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    // put all elements of stack again in queue
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

}

void reverseUsingRecursion(queue<int> &q)
{
    if(q.empty())
    {
        return;
    }

    //1 case
    int frontElement = q.front();
    q.pop();

    //recursion
    reverseUsingRecursion(q);

    //backtracing
    q.push(frontElement);
}


using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(40);
    q.push(50);
    reverseUsingRecursion(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}