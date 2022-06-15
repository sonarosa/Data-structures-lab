#include <iostream>
using namespace std;
void Selec_sort(int data[],int n)
{
int temp=0;
cout<<"Array before sorting:";
for(int i=0;i<n;i++)
{
    cout<<data[i]<<" ";
}
for (int i = 0; i< n-1; i++)
  {int k=i;
  for (int j = i+1; j <n;j++)
    {if(data[j]<data[k])
       k=j;
       temp=data[i];
       data[i]=data[k];
       data[k]=temp;
      
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

Selec_sort(arr,num);
return 0;

}
