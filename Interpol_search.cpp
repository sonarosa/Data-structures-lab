#include <iostream>
using namespace std;
int Interpol_search(int item,int data[],int n)
{int beg=0,end=n,loc=-1,count=0;
//for(int k=0;k<=end;k++)
while((beg<=end)&&(item>=data[beg])&&(item<=data[end]))
{int pos=beg+((item-data[beg])/(data[end]-data[beg])*(end-beg));
if(item==data[pos])
{
    return pos;
}

if(data[pos]<item)
 { beg=pos+1;
 }
 else 
 {
end=pos-1;
 }
//count++;
//cout<<"count="<<count;
}
 return loc;
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
int result=Interpol_search(value,arr,u);
(result == -1) ? cout << "Element not found!!" : cout << "Element found at index: " << result;
return 0;
}
