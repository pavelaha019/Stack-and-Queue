//STACK
#include<iostream>
using namespace std;

int top = -1;
int stack[5];
int max_size = 4;
int element;

int push(int data)
{
    if (top == max_size)
    {
        cout<<"OVERFLOW"<<endl;
    }
    else
    {   

        top++;
        stack[top]=data;
        cout<<data<<" PUSH"<<endl;
    }
}

int pop()
{
    int data;
    if(top == -1)
    {
        cout<<"UNDERFLOW"<<endl;
    }
    else 
    {
        data=stack[top];
        top--;
        cout<<data<<" POP"<<endl;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    return 0;
}