#include<bits/stdc++.h>
using namespace std;

// using recursion
void solve(stack<int>& st,int pos,int &ans)
{
    //base case
    if(pos == 1)
    {
        ans = st.top();
        return;
    }

    //1 case
    pos--;
    int temp = st.top();
    st.pop();

    //recursion
    solve(st,pos,ans);

    //backtracking
    st.push(temp);
}

int middleElement(stack<int> &st){

    if(st.empty()){
        return -1;
    }

    int size = st.size();
    int pos = 0;
    if(size & 1)
    {
        pos = (size/2) + 1;
    }
    else{
        pos = (size/2);
    }
    int ans = -1; 
    solve(st,pos,ans);
    return ans;

}




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


    cout<<"Middle element of the stack is :"<<middleElement(st1)<<endl;

    

    //normal approach
    // int odd = (st.size()/2);
    // int even = (st.size()/2);
    // while(odd--)
    // {
    //     st.pop();
    // }
    // cout<<"Odd middle of stack is : "<<st.top()<<endl;

    // while(even--)
    // {
    //     st1.pop();
    // }
    // cout<<"Even middle of stack is : "<<st1.top()<<endl;
    // return 0;
}