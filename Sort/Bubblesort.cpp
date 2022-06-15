#include <iostream>
using namespace std;
void Bubblesort(int data[],int n)
{
int temp=0;
cout<<"Array before sorting:";
for(int i=0;i<n;i++)
{
    cout<<data[i]<<" ";
}
for (int j = 1; j < n; j++)
{for (int i = 0; i < n-j;i++)
{if(data[i]>data[i+1])
  {temp=data[i];
  data[i]=data[i+1];
  data[i+1]=temp;
  }
}
 
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

Bubblesort(arr,num);
return 0;

}
