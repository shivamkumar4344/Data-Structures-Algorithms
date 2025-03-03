#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int *arr;
    int capacity;
    int size;
    Heap(int capacity)
    {
        this->size = 0;
        this->capacity = capacity;
        this->arr = new int[capacity];
    }

    void insert(int data)
    {
        if(size == capacity){
            cout<<"Heap Overflow";
            return;
        }
        size++;
        int index = size;
        arr[index] = data;
        
        while (index > 1)
        {
            int parent = index/2;
            if(arr[index] > arr[parent])
            {   
                swap(arr[index],arr[parent]);
                index = parent;  
            }      
            else break;
        }
        
    }

    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


int main()
{

    Heap h(20);

    h.insert(5);
    h.insert(10);
    h.insert(15);
    h.insert(6);
    h.insert(25);
    h.insert(50);
    h.print();

    return 0;
}
