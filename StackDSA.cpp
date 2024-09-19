#include<iostream>
using namespace std;
struct mystack{
     int *arr;
     int cap;
     int top;
    mystack(int a)
    {
        cap = a;
        top=-1;
        arr = new int[cap];
    }
    void push(int a)
    {   
        if(top-1==cap){cout<<"stack overflow";}
        top++;
        arr[top] = a;
    }
    void print()
    {
        cout<<arr[top]<<endl;
    }
    int pop()
    {    if(top==0){cout<<"stack underflow";}
         int result = arr[top];
         top--;
         return result; 
    }
    int getsize()
    {
        return top+1;
    }
    bool isfull()
    {
        if(top==cap){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty()
    {
        if(top==0)
        {
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    mystack s(5);
    s.push(10);
    s.print();
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.getsize();
    return 0;
}