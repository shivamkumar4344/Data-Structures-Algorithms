#include<bits/stdc++.h>
using namespace std;

void replaceChar(char ch[])
{
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='@'){
            ch[i] = ' ';
        }
        i++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before replacement: ";
    cout<<ch<<endl;
    cout<<"After replacement: ";
    replaceChar(ch);
    cout<<ch<<endl;
    return 0;
}