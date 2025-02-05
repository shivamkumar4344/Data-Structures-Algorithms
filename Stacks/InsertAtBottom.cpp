#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& st,int element)
{
    int size = st.size();
    if(size == 0)
    {
        st.push(element);
        return;
    }

    //first case;
    size--;
    int temp = st.top();
    st.pop();

    //recursion
    insertAtBottom(st,element);

    //backtrack
    st.push(temp);
}


//reverse using recursion
void reverseStack(stack<int>& st)
{
    if(st.empty()){
        return;
    }

    //1 case
    int temp = st.top();
    st.pop();

    //recirsion
    reverseStack(st);

    //backtracing
    insertAtBottom(st,temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // insertAtBottom(st,400);
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}