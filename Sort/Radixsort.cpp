#include<iostream>
using namespace std;

void Sort(int arr[],int size,int divi)
{int a[size];
int c[10]={0};
for(int i=0;i<size;i++)
 {int j=(arr[i]/divi)%10;
     c[j]++; 
 }
  
    for (int i = 1; i < 10; i++) 
        c[i] += c[i - 1]; 
  
    for (int i = size - 1; i >= 0; i--) 
    {int j=(arr[i]/divi)%10;
        a[c[j] - 1] = arr[i]; 
        c[j]--; 
    } 
  
    for (int i = 0; i < size; i++) 
        arr[i] = a[i]; 
}
void RadixSort(int arr[],int size)
{

cout<<"Array before sorting:";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
int max=arr[0];
for (int i = 1; i < size; i++)
  {if(arr[i]>max)
   {max=arr[i];
   }
  }
int m=max;
for (int divi = 1;m/divi > 0; divi*=10)
 {Sort(arr,size,divi);
 }
cout<<"\nArray after sorting:";
for (int j = 0; j < size; j++)
{
cout<<arr[j]<<" ";
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
RadixSort(arr,num);
return 0;

}
