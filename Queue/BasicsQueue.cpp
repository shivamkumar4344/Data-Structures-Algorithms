#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;
        Queue(int size)
        {
            arr = new int[size];
            this->size = size;
            front = -1;
            rear = -1;
            memset(arr, 0, size * sizeof(int));
        }

    void push(int data)
    {
        if((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            //full 
            cout<<"Overflow"<<endl;
            return;
        }
        else if(front == -1 and rear == -1)
        {
            //empty
            front++;
            rear++;
            arr[rear] = data;
        }
        else if(rear == size-1 and front!=0)
        {
            //circular nature
            rear = 0;
            arr[rear] = data;
            
        }
        else{
            //normal case;
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        if(front == -1 and rear == -1)
        {
            //empty
            cout<<"UnderFlow"<<endl;
            return;
        }
        else if(front == rear)
        {
            //single element
            front = -1;
            rear = -1;
        }
        else if(front == size -1 )
        {
            //circular nature
            arr[front] = -1;
            front = 0;

        }
        else{
            //normal 
            arr[front] = -1;
            front++;
        }
    }

    int getSize()
    {
        if(front == -1 and rear == -1)
        {
            return 0;
        }
        else{
            return rear - front + 1;
        }
    }

    bool isEmpty()
    {
        if(front == -1 and rear == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int getFront()
    {
        if(front == -1)
        {
            return -1;
        }
        else
        {
        return arr[front];
        }
    }

    int getBack()
    {
        if(rear > size-1)
        {
            return -1;
        }
        else{
        return arr[rear];
        }
    }

    void print()
    {
        cout<<"Printing Queue: ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


int main()
{
    Queue q(5);
    q.push(10);
    q.print();
    q.push(20);
    q.push(30);
    q.push(50);
    q.push(40);
    q.pop();
    q.pop();
    q.push(100);
    q.push(110);

    q.print();
    // cout<<q.getSize()<<endl;
    // if(q.isEmpty() == true)
    // {
    //     cout<<"Queue is empty"<<endl;
    // }
    // else{
    //     cout<<"Queue is not empty"<<endl;
    // }

    // cout<<q.getFront()<<endl;
    // cout<<q.getBack()<<endl;
    return 0;
}
