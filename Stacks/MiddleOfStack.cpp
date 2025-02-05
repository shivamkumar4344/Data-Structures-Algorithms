#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> st1;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.push(50);
    st1.push(60);
    
    int odd = (st.size()/2);
    int even = (st.size()/2);
    while(odd--)
    {
        st.pop();
    }
    cout<<"Odd middle of stack is : "<<st.top()<<endl;

    while(even--)
    {
        st1.pop();
    }
    cout<<"Even middle of stack is : "<<st1.top()<<endl;
    return 0;
}