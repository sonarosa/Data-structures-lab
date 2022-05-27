#include <iostream>
using namespace std;
int Ternarysearch(int item,int data[],int n)
{int beg=0,end=n,loc=-1;
int mid1,mid2;
while(beg<=end) 
{mid1=beg+(end-beg)/3;
mid2=beg+(2*(end-beg))/3;
if(item==data[mid1])
{
    return mid1;
}
if(item==data[mid2])
{
    return mid2;
}
if(item<data[mid1])
 {end=mid1-1;
 }
 else if(item>data[mid2])
 {
 beg=mid2+1;
 }
 else
 {
    beg=mid1+1;
    end=mid2-1;
 }
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
int result=Ternarysearch(value,arr,u);
(result == -1) ? cout << "Element not found!!" : cout << "Element found at index: " << result;
return 0;
}
