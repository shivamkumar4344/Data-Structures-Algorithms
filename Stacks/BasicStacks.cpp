#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data){
        if(top == size-1)
        {
            cout<<"Stack is overflow";
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is underflow";
            return;
        }
        else{
            top--;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int getSize()
    {
        if(top == -1)
        {
            return 0;
            cout<<"Stack is underflow";
        }
        else{
            return top+1;
        }
    }

    int getTop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
            return 0;
        }
        else{
            return arr[top];
        }
    }

    void print()
    {
        cout<<"Stack: ";
        for(int i=0;i<getSize();i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main()
{
    //vector implementation
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);

    // cout<<"Size of stack is: "<<st.size()<<endl;
    // int n = 3; 
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    // if(st.empty()){
    //     cout<<"Empty stack"<<endl;
    // }else{
    //     cout<<"Not empty"<<endl;
    // }
    Stack st(8);
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();
    st.pop();
    st.print();
    cout<<"Top element is : "<<st.getTop()<<endl;
    cout<<"Size of stack is : "<<st.getSize()<<endl;
    if(st.isEmpty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"Stack is non empty"<<endl;
    }

    return 0;
}