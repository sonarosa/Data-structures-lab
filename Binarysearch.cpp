#include <iostream>
using namespace std;
int Binarysearch(int item,int data[],int ub)
{int beg=0,loc=-1;
int end=ub;
int mid;
for (int k = 0; k <= ub; k++)
//while((beg<=end) && (data[mid]!=item))
{mid=(beg+end)/2;
if(item<data[mid])
 {end=mid-1;
 }
 else 
 {
 beg=mid+1;
 }
}
mid=(beg+end)/2;
if(data[mid]==item)
{
    return mid;
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
int result=Binarysearch(value,arr,u);
(result == -1) ? cout << "Element not found!!" : cout << "Element found at index: " << result;
return 0;
}
