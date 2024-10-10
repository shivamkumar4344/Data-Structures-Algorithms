#include<bits/stdc++.h>
using namespace std;

void reverseCharArray(char ch[],int size){
    int i = 0;int j=size-1;
    while(i<=j)
    {
        int temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
    }

}

int main()
{
    // char ch[10];
    // cin>>ch;
    // cout<<"Printing value:- "<<ch<<endl;
    // int temp = (int)ch[6];
    // cout<<"ASCII value of null charcter: "<<temp<<endl;

    // char cha[100];
    // cin.getline(cha,100); // only terminates after enter button but it will take spaces and tabs.
    // cout<<"Printing: "<<cha<<endl;

    char ch[100];
    cin>>ch;
    int c = 0;
   while(ch[c]!='\0'){
        c++;
   }
   cout<<"Length of string is :  "<<c<<endl;
   cout<<"Length of string by utility function  : "<<strlen(ch)<<endl;

//    cout<<"after reversing : "<<endl; 
//    reverseCharArray(ch,strlen(ch));
//    cout<<ch<<endl;

    cout<<"After reversing : "<<endl;
    strrev(ch);  //utility function for string reversal
    cout<<ch<<endl;
   return 0;
}