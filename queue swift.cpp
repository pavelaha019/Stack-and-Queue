//QUEUE SWIFT
#include<iostream>
using namespace std;

int rear = -1;
int fornt = -1;
int q[5];
int max_size = 4;


void enqueue(int data)
{
    if (rear == max_size - 1)
    {
        cout<<"OVERFLOW \n"<<endl;
    }
    else
    {   
        rear++;
        q[rear]=data; 
        cout<<data<<" ENQUEUE \n"<<endl;
    }
}

void dequeue()
{
    int data;
    if(fornt >= rear)
    {
        cout<<"UNDERFLOW \n"<<endl;
    }
    else 
    {
        fornt++;
        data= q[fornt];
        cout<<data<<" DEQUEUE \n"<<endl;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    

   dequeue();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
  

    return 0;
}