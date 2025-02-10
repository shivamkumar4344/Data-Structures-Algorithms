#include<bits/stdc++.h>
using namespace std;

stack<int> st,min_st;
void push(int val)
{
    if(min_st.empty() || min_st.top() >= val)
    {
        min_st.push(val);
    }
    st.push(val);
}

void pop()
{
    if(min_st.top() == st.top()) min_st.pop();
    st.pop();
}

int getTop()
{
    return st.top();
}

int getMin()
{
    return min_st.top();
}



int main()
{
    stack<int> st,min_st;
    st.push(5);
    st.push(50);
    st.push(40);
    st.pop();
    // print();

    // while(!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }cout<<endl;

    cout<<getMin()<<endl;

    return 0;
}