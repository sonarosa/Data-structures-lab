#include <iostream>
using namespace std;
void Insert_sort(int data[],int n)
{
int temp=0;
cout<<"Array before sorting:";
for(int i=0;i<n;i++)
{
    cout<<data[i]<<" ";
}
for(int i=1;i<n;i++)
{temp=data[i];
  int ptr=i-1;
   while(temp<data[ptr] &&ptr>=0)
    {
     data[ptr+1]=data[ptr];
     ptr=ptr-1;
     
    }
    data[ptr+1]=temp;
}
cout<<"\nArray after sorting:";
for (int j = 0; j < n; j++)
 {
  cout<<data[j]<<" ";
 }
}
int main()
{
int num,value;
cout<<"Enter number of elements:";
cin>>num;
int arr[num];
cout<<"Enter array elements:\n";
for(int i=0;i<num;i++)
{cout<<"Enter "<< i+1<<" element:";
cin>>arr[i];
}
Insert_sort(arr,num);
return 0;

}
