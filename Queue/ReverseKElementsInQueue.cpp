#include<bits/stdc++.h>
using namespace std;

void reverseKGroups(queue<int> &q, int k)
{
    stack<int> st;
    int n = q.size();
    //edge cases
    if(k > n || k == 0)
    {
        return;
    }
    //push all elements into the stack
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }

    //again push back it into the queue

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    //pop and push (n-k) into the queue
    for(int i=0;i<(n-k);i++)
    {
        q.push(q.front());
        q.pop();
    }
}

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseKGroups(q,3);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}