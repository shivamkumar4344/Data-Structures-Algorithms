#include<bits/stdc++.h>
using namespace std;

void lowerToUpper(char ch[])
{
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='a' && ch[i]<='z'){
        char curr = ch[i];
        ch[i] = curr + 'A' - 'a';
        }
        i++;
    }
}

void upperToLower(char ch[])
{
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            char curr = ch[i];
            ch[i] = curr + 'a' - 'A';
        }
        i++;
    }
}


int main()
{
    char ch[100];
    cin.getline(ch,100);
    lowerToUpper(ch);
    cout<<"Changes all to upper :  " <<ch<<endl;

    upperToLower(ch);
    cout<<"Changes all to lower : "<<ch<<endl;

    return 0;
}