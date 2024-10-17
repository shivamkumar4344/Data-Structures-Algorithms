#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int a = 5;
    // int* ptr = &a;
    // cout<<"variabe a : "<<a<<endl<<"address of a: "<<ptr<<endl;
    // cout<<"derefrencing ptr: "<<*ptr<<endl;
    // cout<<"Size of ptr: "<<sizeof(ptr)<<endl;

    // char ch = 'b';
    // char* ptrCh = &ch;
    // cout<<"Size of char ptr: "<<sizeof(ptrCh)<<endl;

    // long l = 348737;
    // long* ptrlong = &l;
    // cout<<"Size of long ptr: "<<sizeof(ptrlong)<<endl;


    // int b = 201;
    // int* ptri = &b;
    // cout<<b+1<<endl;
    // cout<<ptri<<endl;
    // cout<<ptri+1<<endl;

   //copying the pointer
//    int a = 100;
//    int* p = &a;
//    int* q = p;
//    cout<<a<<" "<<p<<" "<<q<<endl;
//    cout<<&p<<" "<<&q<<endl;
//    cout<<*p<<" "<<*q<<endl;

    //pointer with array
    int arr[5] = {10,20,30,40,50};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;

    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*arr+1<<endl;


    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<" ";
    }cout<<endl;

    cout<<"size of array "<<sizeof(arr)<<endl;  //4*5 = 20

    char ch[10] = "shivam";
    char* cptr = ch;//&ch
    cout<<cptr<<endl;
    cout<<*(cptr+2)<<endl;


    return 0;
}