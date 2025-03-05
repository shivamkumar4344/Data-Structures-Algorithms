#include<bits/stdc++.h>
using namespace std;
int main()
{
    //max_heap - by default
    priority_queue<int> max_heap;
    max_heap.push(10);
    max_heap.push(30);
    max_heap.push(50);
    max_heap.push(110);
    max_heap.push(90);

    cout<<"Top element of the max heap is : "<<max_heap.top()<<endl;

    max_heap.pop();
    cout<<"Top element of the max heap is : "<<max_heap.top()<<endl;
    cout<<"Size of the heap: "<<max_heap.size()<<endl;

    if(max_heap.empty()) cout<<"Max Heap is empty"<<endl;
    else cout<<"Max Heap is not empty"<<endl;

    //min_heap - takes parameters such as data type, type of data structure in which we want to store it and the comparator function.
    priority_queue<int,vector<int>,greater<int> > min_heap;
    min_heap.push(5000);
    min_heap.push(2300);
    min_heap.push(4700);
    min_heap.push(3200);
    
    cout<<"Top element of the min heap is : "<<min_heap.top()<<endl;

    min_heap.pop();

    cout<<"Top element of the min heap is : "<<min_heap.top()<<endl;

    cout<<"Size of min heap is : "<<min_heap.size()<<endl;

    if(min_heap.empty()) cout<<"Min heap is empty"<<endl;
    else cout<<"Min heap is not empty"<<endl;

    return 0;
}