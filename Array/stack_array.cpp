#include<iostream>
using namespace std;
class stack{
    int top;
    int* array;
    int maxstck;
    public:
    stack(int n)
    {
     top=-1;
     maxstck=n;
     array=new int[n];
     
    }
    void push(int item)
    {
       if(top==maxstck)
       {
           cout<<"Stack is underflow\n";
       }
       top=top+1;
       array[top]=item;
       cout<<"We have pushed "<<item<<" onto the stack\n";
    }
    void pop()
    {int item;
        if(top==-1)
        {
            cout<<"Stack is underflow\n";
        }
        item=array[top];
        top=top-1;
        cout<<"We have poped "<<item<<" from the stack\n";
    }
};
int main()
{
    int ele,size;
    cout<<"Enter how many elements to be added to stack\n";
    cin>>size;
    stack s(size);
    cout<<"-------------------PUSH OPERATION----------------\n";
    cout<<"Enter elements to be pushed onto the stack\n";
    for(int i=0;i<size;i++)
   { cin>>ele;
    s.push(ele);
   }
   cout<<"-------------------POP OPERATION----------------\n";
   cout<<endl;
   for(int i=0;i<size;i++)
   {
       s.pop();
   }
   return 0;
}
