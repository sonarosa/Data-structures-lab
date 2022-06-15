#include <iostream>
using namespace std;
int Fib_search(int data[],int item,int n)
{int t1=1,t2=0;
int fb=t1+t2;
int offset=0;
while(fb<n)
 {t2=t1;
  fb=t1+t2;
  t1=fb;
 }
offset=-1;
while(fb>1)
{
 int i=offset+t2;
 if(data[i]<item)
  {fb=t1;
   t1=t2;
   t2=fb-t1;
   offset=i;
  }
 else if(data[i]>item)
  {
  fb=t2;
  t1=t1-t2;
  t2=fb-t1;
  }
 else
  {
   return i;
  }
}
if(t1&&data[offset+1]==item)
 {
  return offset+1;
 }
return -1;
}
int main()
{
int u,value;
cout<<"Enter upper limit of elements\n";
cin>>u;
int arr[u];
cout<<"Enter array elements\n";
for(int i=0;i<u;i++)
{cin>>arr[i];
}
cout<<endl;
cout<<"Enter element to be searched\n";
cin>>value;
int result=Fib_search(arr,value,u);
(result == -1) ? cout << "Element not found!!" : cout << "Element found at index: " << result;
return 0;
}
