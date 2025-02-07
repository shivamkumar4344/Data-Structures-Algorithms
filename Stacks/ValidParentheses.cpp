#include<bits/stdc++.h>
using namespace std;


//leetcode 20 - (([]))
bool isValidParenthes(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        if(ch=='(' or ch=='[' or ch=='{'){
            st.push(ch);
        }
        else{
            if(st.empty())
            {
                return false;
            }
            else{
                if(ch==')' and st.top() == '(')
                {
                    st.pop();
                }
                else if(ch==']' and st.top() == '['){
                    st.pop();
                }
                else if(ch=='}' and st.top() == '{'){
                    st.pop();
                }
                else{
                    // no match found
                    return false;
                }
            }
        }
    }

    if(st.size() == 0)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    string str = "()[]{}";
    bool check = isValidParenthes(str);
    if(check == true)
    {
        cout<<"It is valid parentheses"<<endl;
    }
    else{
        cout<<"It is not valid."<<endl;
    }

    return 0;
}