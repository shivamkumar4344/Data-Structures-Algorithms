#include<bits/stdc++.h>
using namespace std;

bool redundantBrackets(string str)
{
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        if(ch=='(' or ch=='+' or ch=='-' or ch=='*' or ch=='/')
        {
            st.push(ch);
        }
        else if(ch==')')
        {
            int opCount = 0;
            while(!st.empty() and st.top()!='(')
            {
                char temp = st.top();
                if(temp=='+' or temp=='-' or temp=='/' or temp=='*')
                {
                    opCount++;
                }
                st.pop();
            }
            st.pop();
            if(opCount==0)
            {
                return true;
            }
            
        }
    }
    return false;
}


int main()
{
    string str = "((a+b)+b)";
    bool check = redundantBrackets(str);
    if(check == true)
    {
        cout<<"Redundant Brackets are present"<<endl;
    }
    else{
        cout<<"Redundant brackets are not present"<<endl;
    }

    return 0;
}