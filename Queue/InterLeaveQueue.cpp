#include<bits/stdc++.h>
using namespace std;


void interleave(queue<int>& first)
{
    queue<int> second;
    int size = first.size();
    for(int i=0;i<size/2;i++)
    {
        second.push(first.front());
        first.pop();
    }

    //merge both halves into the first queue

    for(int i=0;i<size/2;i++)
    {
        int temp = second.front();
        second.pop();
        first.push(temp);

        temp = first.front();
        first.pop();
        first.push(temp);
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
    q.push(60);
    interleave(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}