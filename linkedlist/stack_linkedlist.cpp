#include<iostream>
using namespace std;
class node{
    public:
    int info;
    node* link;
};
class stack{
    node* top;
    public:
    stack()
    {
     top=NULL;
    }
    void push(int item)
    {node* newn;
    newn=new node();
       if(newn=NULL)
       {
           cout<<"Stack is underflow\n";
       }
       newn->info=item;
       if(top==NULL)
       {
           newn->link=NULL;
       }
       else{
       newn->link=top;
       }
       top=newn;
       cout<<"We have pushed "<<item<<" onto the stack\n";
    }
    void pop()
    {int item;
        if(top==NULL)
        {
            cout<<"Stack is underflow\n";
        }
        item=top->info;
        node* temp=top;
        top=top->link;
        delete(temp);
        cout<<"We have poped "<<item<<" from the stack\n";
    }
};
int main()
{
    int ele,size;
   /* cout<<"Enter how many elements to be added to stack\n";
    cin>>size;*/
    stack s;
    /*cout<<"-------------------PUSH OPERATION----------------\n";
    cout<<"Enter elements to be pushed onto the stack\n";
    for(int i=0;i<size;i++)
   { cin>>ele;
    s.push(ele);
   }*/
   s.push(5);
   s.push(2);
   /*cout<<"-------------------POP OPERATION----------------\n";
   cout<<endl;
   for(int i=0;i<size;i++)
   {
       s.pop();
   }*/
   s.pop();
   s.pop();
   s.pop();
   return 0;
}
