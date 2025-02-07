#include<bits/stdc++.h>
using namespace std;

void insertAtSorted(stack<int>& st,int ele)
{
    if(st.empty() || ele > st.top()){
        st.push(ele);
        return;
    }

    //1 case
    int temp = st.top();
    st.pop();

    //recursion
    insertAtSorted(st,ele);

    //backtracking
    st.push(temp);
}

void sortAStack(stack<int>& st){
    if(st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();

    //recursion
    sortAStack(st);

    //backtrack
    insertAtSorted(st,temp);
}

int main()
{
    stack<int> st;
    st.push(11);
    st.push(2);
    st.push(35);
    st.push(9);
    // insertAtSorted(st,15);
    sortAStack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}