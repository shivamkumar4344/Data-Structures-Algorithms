#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char ch[])
{
    int i=0;
    int j=strlen(ch)-1;
    while(i<=j)
    {
        if(ch[i]==ch[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char ch[100];
    cin>>ch;

    bool isPalindrome = checkPalindrome(ch);
    if(isPalindrome)
    {
        cout<<"Valid Palindrome"<<endl;
    }
    else{
        cout<<"Invalid Palindrome"<<endl;
    }

    return 0;
}

